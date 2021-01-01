//Concatenate three string into one
#include<stdio.h>
#include<string.h>

int main()
{
    char name[50],f_n[15],m_n[15],l_n[15];
    printf("Enter first name: ");
    gets(f_n);
    printf("Enter middle name: ");
    gets(m_n);
    printf("Enter last name: ");
    gets(l_n);
    strcpy(name,f_n);
    strcat(name," ");
    strcat(name,m_n);
    strcat(name," ");
    strcat(name,l_n);
    printf("\nFull name: %s",name);
    return 0;
}
