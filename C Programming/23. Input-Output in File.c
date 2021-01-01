//File operation - read and write
#include<stdio.h>

int main()
{
    FILE *f1;
    char ch;
    f1=fopen("input.txt","w");
    printf("Data input:\n");
    while((ch=getchar())!=EOF)
        putc(ch,f1);
    fclose(f1);
    f1=fopen("input.txt","r");
    printf("\nData output:\n");
    while((ch=getc(f1))!=EOF)
        printf("%c",ch);
    fclose(f1);
}
