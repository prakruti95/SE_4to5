#include<stdio.h>
#include<conio.h>
void main()
{
    int pri;
    float roi;
    int year;
    float intrest;
    
    
    printf("Enter Pri Amount: ");
    scanf("%d",&pri);
    
    printf("Enter ROI:");
    scanf("%f",&roi);
    
    printf("Enter Year:");
    scanf("%d",&year);
    
    
    intrest = pri*roi*year/100;
    float totalamount = pri+intrest;
    printf("\n Your Intrest amount is %f",intrest);
    printf("\n Your Total amount is %f",totalamount);
    
   
    getch();
}
