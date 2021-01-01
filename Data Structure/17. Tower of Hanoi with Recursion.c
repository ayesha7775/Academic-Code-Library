//Tower of Hanoi
#include<stdio.h>

int total=0;

void tower(int n, char beg, char aux, char end){
    if(n==1){
        printf("\nDisk 1 moved from %c ---> %c",beg,end);
        total++;
        return;
    }
    tower(n-1, beg, end, aux);
    printf("\nDisk %d moved from %c ---> %c",n,beg,end);
    total++;
    tower(n-1, aux, beg, end);
}

int main()
{
    int n;
    char beg='A',aux='B',end='C';
    printf("Enter the number of disks in the tower: ");
    scanf("%d",&n);
    tower(n,beg,aux,end);
    printf("\n\nTotal steps needed: %d\n", total);
    return 0;
}
