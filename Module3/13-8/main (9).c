#include<stdio.h>
#include<conio.h>

void swap(int *x,int *y)
{
  int temp;

   printf("\n -------- Before Swap -----------"); 
   printf("\n Fun Value of x is : %d ",*x);
   printf("\n Fun Value of y is : %d ",*y);
   
   temp = *x; /* save the value of x */
   *x = *y;    /* put y into x */
   *y = temp; /* put x into y */
   
   printf("\n -------- After Swap -----------"); 
   printf("\n Fun Value of x is : %d ",*x);
   printf("\n Fun Value of y is : %d ",*y);
}

int main()
{
    int a = 5;
    int b = 3;
   
   
   printf("\n -------- Before Swap -----------"); 
   printf("\n Value of a is : %d ",a);
   printf("\n Value of b is : %d ",b);
    
    swap(&a,&b);
   
   
   printf("\n -------- After Swap -----------"); 
   printf("\n Value of a is : %d ",a);
   printf("\n Value of b is : %d ",b);
    
    
    
   
    return 0;
}
