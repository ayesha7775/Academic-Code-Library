//Calculate the length of copied string
#include<stdio.h>
#include<string.h>

int main()
{
   char text[100],copy[100];
   printf("Enter a string: ");
   gets(text);
   printf("\nCopied text: %s",strcpy(copy,text));
   printf("\nThe number of copied characters: %d\n",strlen(copy));
   return 0;
}
