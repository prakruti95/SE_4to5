#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    int sum=0;
    
    printf("Enter Any Number");
    scanf("%d",&num);
    
    while(num>0)
    {
        int rem = num % 10;//rem
        sum+=rem;//rem add sum
        num=num/10;
        
    }
    
    printf("Sum of all digits are : %d",sum);
    
    
    
    
    
    getch();
}