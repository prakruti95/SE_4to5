#include<stdio.h>
#include<conio.h>
void main()
{
    int a = 6;
    int b = 3;
    
    int add,sub,mul,di,mod;
    
    add = a+b;
    sub = a-b;
    mul = a*b;
    di = a/b;
    mod = a%b;
    
    printf("\n Addition of %d + %d value is : %d",a,b,add);
    printf("\n Substraction of  %d - %d value is : %d",a,b,sub);
    printf("\n Multiplication of %d * %d value is : %d",a,b,mul);
    printf("\n Division of two %d / %d is : %d",a,b,di);
     printf("\n Modulus of two %d / %d is : %d",a,b,mod);
    
    getch();
}