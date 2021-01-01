//Find if the pattern exists in a string or not
#include<stdio.h>
#include<string.h>

int match(char string[], char pattern[]){
    int i,j,str_len,ptrn_len;
    str_len= strlen(string);
    ptrn_len= strlen(pattern);
    for(i=0;i<=str_len-ptrn_len;++i){
        for(j=0;j<ptrn_len;++j){
            if(pattern[j]!=string[i+j])
                break;
        }
        if(j==ptrn_len) return i;
    }
    return -1;
}

int main()
{
    int idx;
    char string[100],pattern[100];
    printf("Enter the text string: ");
    scanf("%s",string);
    printf("Enter the pattern: ");
    scanf("%s",pattern);
    idx=match(string,pattern);
    if(idx==-1)
        printf("\nPattern is not found\n");
    else
        printf("\nPattern is found at index %d (0-based index)\n",idx);
    return 0;
}
