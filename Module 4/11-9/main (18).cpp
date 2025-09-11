#include <iostream>
using namespace std;
class Student
{
    public:
    int id;
    string name;
    
    Student(int i,string n)
    {
       id = i;
       name = n;
    }
    
    void display()
    {
        cout<<"Your id is :"<<id<<endl;
        cout<<"Your name is :"<<name<<endl;
    }
};
int main()
{
    Student s1 = Student(101,"test");
    Student s2 = Student(102,"test2");
    Student s3 = Student(103,"test3");
  
    s1.display();
    s2.display();
    s3.display();

    return 0;
}