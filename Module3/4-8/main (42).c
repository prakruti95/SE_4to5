#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[]="mango";
    char ch2[50];
    
    do
    {
       printf("Fav. Fruit?");
       scanf("%s",&ch2);
    }
    while(strcmp(ch,ch2)!=0);
    
    printf("Answer is Correct");
    
    return 0;
}
