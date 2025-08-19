#include<stdio.h>
#include<conio.h>

struct student
{
    int id;
    char grade[10];
}s1;


int main()
{
    
    printf("\n Enter Student Details");
    
    printf("\n Enter Id: ");
    scanf("%d",&s1.id);
    
    printf("\n Enter grade:");
    scanf("%s",&s1.grade);
    
    
    printf("\n Your Id is : %d , Your Grade is %s",s1.id,s1.grade);
    
    

    return 0;
}
