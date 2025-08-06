#include<stdio.h>
#include<conio.h>
int main()
{
    
    int marks[5],i;
    
    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;
    marks[3] = 40;
    marks[4] = 50;
    
    for(i=0;i<5;i++)
    {
       printf("\n Marks are: %d",marks[i]); 
    }

    return 0;
}
