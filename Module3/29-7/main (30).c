#include <stdio.h>
#include <conio.h>

void main()
{      
	int num1=0,num2=1,fib=0,num;
    //fib-0,1,
	printf("How many Fibonacci Number you want to see : ");
	scanf("%d",&num);//10//9
    //printf("%d",num1);
    //printf("%d",num2);
	while (num > 0)
	{
	    //printf("\n executed");
	    
		printf("%d,",fib);//0
		fib =num1+num2;//0+1=1=2
		num1=num2;
		num2=fib;
		num--;
	}
	getch();
}
