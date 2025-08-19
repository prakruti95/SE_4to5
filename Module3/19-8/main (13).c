#include<stdio.h>
#include<conio.h>

struct Address
{
     char city[50];
     int zip;
}a1;

struct Student
{
      char name[50];  
      int age;
      struct Address add;//nested structure call
}s1;


int main()
{
    printf("\n Enter Name: ");
    scanf("%s",&s1.name);
    
    printf("\n Enter Age: ");
    scanf("%d",&s1.age);
    
    printf("\n Enter City: ");
    scanf("%s",&a1.city);
    
    printf("\n Enter Zipcode: ");
    scanf("%d",&s1.add.zip);
    
    printf("\n Name is %s",s1.name);
    printf("\n Age is %d",s1.age);
    printf("\n City is %s",a1.city);
    printf("\n Zip is %d",s1.add.zip);
    
    
  return 0;
}
