#include<stdio.h>
#include<conio.h>

struct address
{
     char city[50];
     int zip;
};

struct Student
{
      char name[50];  
      int age;
      struct address add;
     
}s1;


int main()
{
   
    struct Student s1 = {"John Doe", 20,{"New York", 10001};
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);
    printf("\n Name is %s",s1.add.city);
    printf("\n Age is %d",s1.add.zip);
  
    
  return 0;
}
