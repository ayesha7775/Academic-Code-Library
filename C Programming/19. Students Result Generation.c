//Calculate the total mark of three subjects and the ranking
#include<stdio.h>

struct student{
    int id,total;
    char name[50];
    int marks[3];
};

int main()
{
    int n,i,j,total;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    struct student s[n],temp;
    for(i=0;i<n;i++)
    {
        printf("Student's id: ");
        scanf("%d",&s[i].id);
        printf("Student's name: ");
        scanf("%s",s[i].name);
        printf("Obtained marks of three subjects: ");
        total=0;
        for(j=0;j<3;j++)
        {
            scanf("%d",&s[i].marks[j]);
            total=total+s[i].marks[j];
        }
        s[i].total=total;
    }
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
      {
          if(s[i].total<s[j].total)
          {
              temp=s[i];
              s[i]=s[j];
              s[j]=temp;
          }
      }
    }
    for(i=0;i<n;i++)
        printf("Student's id: %d  Name: %s  Total marks: %d  Position: %d\n",s[i].id,s[i].name,s[i].total,i+1);
    return 0;
}
