#include <stdio.h>

int main()
{

    int a = 6;
     
    a++;
    printf("\n %d",a);
   
   ++a;
   printf("\n %d",a);
    
   int b =a++;    
   printf("\n %d",b);//9
   
   int c =++a;    
   printf("\n %d",c);
    
    
    return 0;
}
