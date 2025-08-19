#include<stdio.h>
#include<conio.h>

struct topstech
{
    char name[20];
    char tech[20];
    int rollno;
}s1[50];

int main()
{
    int i,n;
    
    printf("\n Enter Total Number of Students");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        printf("\n Enter Your Roll Number");
        scanf("%d",&s1[i].rollno);
        
        printf("\n Enter Your Name");
        scanf("%s",&s1[i].name);
        
        printf("\n Enter Your Technology");
        scanf("%s",&s1[i].tech);
    }
    
     for(i=0;i<n;i++)
    {
        printf("\n %d",s1[i].rollno);
        
        
        printf("\n %s",s1[i].name);
        
        
        printf("\n %s",s1[i].tech);
        
    }
}
