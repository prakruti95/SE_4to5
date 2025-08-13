#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 5;
    int b = 3;
    int c;
   
   printf("\n -------- Before Swap -----------"); 
   printf("\n Value of a is : %d ",a);
   printf("\n Value of b is : %d ",b);
    
    c=a;
    a=b;
    b=c;
   
   printf("\n -------- After Swap -----------"); 
   printf("\n Value of a is : %d ",a);
   printf("\n Value of b is : %d ",b);
    
    
    
   
    return 0;
}
