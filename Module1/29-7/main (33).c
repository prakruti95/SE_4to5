#include<stdio.h>
#include<conio.h>

void main()
{
    
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            //printf("*");
            printf("%d",i);
            // printf("%d",j);
            
        }
        printf("\n");
       
    }
    
    
	getch();
}