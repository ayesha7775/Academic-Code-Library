//Test if two string are palindrome or not
#include<stdio.h>
#include<string.h>

int main()
{
    char text[50],test[50];
    printf("Enter a string to test palindrome: ");
    gets(text);
    strcpy(test,text);
    printf("Reverse string: %s",strrev(test));
    if(strcmp(text,test)==0)
    {
       printf("\nPalindrome string\n");
    }
    else
    {
       printf("\nNon-palindrome string\n");
    }
    return 0;
}
