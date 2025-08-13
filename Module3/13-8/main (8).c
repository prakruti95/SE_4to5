#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 5;
    int b = 3;
   
   
   printf("\n -------- Before Swap -----------"); 
   printf("\n Value of a is : %d ",a);
   printf("\n Value of b is : %d ",b);
    
   a=a+b;
   b=a-b;
   a=a-b;
   
   
   printf("\n -------- After Swap -----------"); 
   printf("\n Value of a is : %d ",a);
   printf("\n Value of b is : %d ",b);
    
    
    
   
    return 0;
}
