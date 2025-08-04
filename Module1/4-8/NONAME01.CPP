#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char name[]= "TOPS";
	clrscr();

	printf("%s",strlwr(name));
      //	printf("%s",strupr(name));
      printf("%s",strrev(name));
	getch();
}