#include<stdio.h>
#include<conio.h>

struct Student
{
      char name[50];  
      int age;
     
}s1;


int main()
{
   
    struct Student s1 = {"John Doe", 20};
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);
  
    
  return 0;
}
