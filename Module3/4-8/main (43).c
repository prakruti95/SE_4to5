#include<stdio.h>
#include<conio.h>
int main()
{
    char ch[50];
    char ch2[50];
    
    printf("Enter Your Name: ");
    scanf("%s",&ch);
   
    strcpy(ch2,ch);
   
    printf("Your Name is : %s",ch2);
   
    
    
    
   
    
    return 0;
}
