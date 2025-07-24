//Nested If
#include<stdio.h>
#include<conio.h>
void main()
{
    int age;
    
    printf("Enter Your Age");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf("\n Eligible to vote");
        
        if(age>=60)
        {
             printf("\n Senior Citizen Category");
        }
        else
        {
            printf("\n Young Age Category");
        }
    }
    else
    {
        printf("\n Not Eligible to vote");
    }
    
    
    
    
    
    
    getch();
}