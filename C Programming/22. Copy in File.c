//Copy the text of one file to another
#include<stdio.h>

int main()
{
    FILE *f1,*f2;
    char ch;
    f1=fopen("source.txt","r");
    if(f1==NULL)
    {
        puts("File not found");
        exit(0);
    }
    f2=fopen("copy.txt","w");
    while((ch=getc(f1))!=EOF)
        putc(ch,f2);
    fclose(f1);
    fclose(f2);
    printf("Copied file contents\n");
}
