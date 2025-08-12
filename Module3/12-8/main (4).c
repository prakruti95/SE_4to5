#include<stdio.h>
#include<conio.h>

int main()
{
    int a = 5;
	int b = 7;
	
	//AND
	int c = a & b;
	printf("\n %d",c);
	
	// Performing Bitwise OR on a and b
	int d = a | b;
	printf("\n  %d",d);

	// Performing Bitwise XOR on a and b
	int e = a ^ b;
	printf("\n %d",e);

	// Performing Bitwise NOT on a
	int f = ~a;
	printf("\n %d",f);
	
	// Performing left shift on a
	int g = a << b;
	printf("\n %d",g);
	
	// Performing right shift on a
	int h = a >> b;
	printf("\n %d",h);
	

    return 0;
}