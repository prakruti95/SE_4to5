#include<stdio.h>
#include<conio.h>

int main()
{
     int n,sum = 0,i = 0;
     
     printf("Enter Any Number");
     scanf("%d",&n);//5
     
     //statement
     tops:
     i++;//1
     sum+=i;//1
     
     if(i<n)
     {
          goto tops;
         
     }
    printf ("\n sum of %d natural numbers = %d", n, sum) ;

    return 0;
}