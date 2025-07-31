#include <stdio.h>

int main()
{

    int x = 5;
    x++;
    printf("\n %d",x);
    ++x;
    printf("\n %d",x);
    
    
    int y = 7;
    
    //post increment
    // int a = y++;
    // printf("\n %d",a);
    
    //pre increment
    int a = ++y;
    printf("\n %d",a);
    

    return 0;
}
