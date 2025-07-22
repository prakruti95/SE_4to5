#include<stdio.h>
#include<conio.h>
void main()
{
    int pri = 50000;
    float roi = 7.5;
    int year = 5;
    float intrest;
    
    
    intrest = pri*roi*year/100;
    float totalamount = pri+intrest;
    printf("\n Your Intrest amount is %f",intrest);
    printf("\n Your Total amount is %f",totalamount);
    
    getch();
}