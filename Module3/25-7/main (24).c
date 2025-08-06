#include<stdio.h>
#include<conio.h>
void main()
{
    int num = 3724;//372//37//3//0
    int sum=0;//4
    while(num>0)
    {
        int rem = num % 10;//4//2//7//3
        sum+=rem;//4=4+2=6+7=13+3=16
        num=num/10;//
        
    }
    
    printf("Sum of all digits are : %d",sum);
    
    
    
    
    
    getch();
}