#include<stdio.h>
#include<conio.h>

void main()
{
    
    int i,j;
    char ch = 'A';
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
           printf("%d",ch);
        }
        printf("\n");
        ch++;
       
    }
    
    
	getch();
}