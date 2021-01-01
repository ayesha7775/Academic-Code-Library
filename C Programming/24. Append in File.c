//Append the text of one file to another
#include<stdio.h>

int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("source.txt","r");
    f2=fopen("append.txt","a");

    if(f1==NULL)
    {
         printf("File not found\n");
         exit(0);
    }
    while((ch=getc(f1))!=EOF)
    {
        putc(ch,f2);
    }
    fclose(f1);
    fclose(f2);
    printf("File appended.\n");
    return 0;
}
