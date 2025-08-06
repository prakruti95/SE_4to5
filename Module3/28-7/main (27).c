#include<stdio.h>
#include<conio.h>
void main()
{
    int num,fdigit=0,ldigit=0;
    
    printf("Enter Any Number");
    scanf("%d",&num);//1234
    
    ldigit = num%10;//4
    
    while(num>0)
    {
        if(num>9)
        {
            num=num/10;//1
        }
        else
        {
            fdigit = num;
            num=num/10;
        }
    }
    
    int ans = fdigit+ldigit;
    printf("Sum of first and last digit is : %d",ans);
    
    // while(num>0)
    // {
        
    //     int rem = num % 10;
      
    //     num=num/10;
    // }
    
    // printf("Biggest digit is : %d",max);
    
    
    
    getch();
}