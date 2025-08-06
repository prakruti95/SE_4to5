#include <stdio.h>
#include <conio.h>

void main()
{
	long int factorial=1;
	int num,loop=1;


	printf("Enter the Number for the factorial : ");
	scanf("%d",&num);

	while (loop<=num)
	{
		  factorial=factorial*loop;
		  loop++;
	}
	printf("Factorial for %d is : %ld",num,factorial);
	getch();
}