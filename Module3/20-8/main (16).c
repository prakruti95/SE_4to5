#include<stdio.h>			    
#include<conio.h>

int main()
{
   char a='b';
   char *ptr;
 
   printf("%c \n",a);
   ptr=&a;
   printf("%p \n",ptr);//memory address//value
  

   *ptr='d';
  
   printf("%c \n",a);
   printf("%p \n",ptr);
  
  return 0;
}