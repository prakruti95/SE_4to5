#include<stdio.h>
#include<conio.h>

//&&,||,!
//a&b
//a||b
//a!b

int main()
{
    int a=5;
    int b=3;
    
    //----------------AND ----------------------
    
    // if(a==5 && b==2)
    // {
    //   printf("condition is true"); 
    // }
    // else
    // {
    //      printf("condition is not true"); 
    // }
    
    //----------------OR ---------------------- 
    
    //   if(a==5 || b==2)
    // {
    //   printf("condition is true"); 
    // }
    // else
    // {
    //      printf("condition is not true"); 
    // }
    
     //----------------NOT ----------------------
    
     if(!(a==5 || b==2))
     {
         printf("true");
     }
     else
     {
         printf("false");
     }













    return 0;
}