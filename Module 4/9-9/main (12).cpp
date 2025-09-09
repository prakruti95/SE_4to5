#include <iostream>
using namespace std;

//class
class Student
{
    //data memeber
    public:
    int id;
    string name;
    string surname;
    string email;
    string password;
    
    //method
   
    void display()
    {
        cout<<"Your id is : "<<id<<endl;
        cout<<"Your Name is: "<<name<<endl;
        cout<<"Your Surname is: "<<surname<<endl;
        cout<<"Your Email is: "<<email<<endl;
        cout<<"Your Password is: "<<password<<endl;
    }
    
};

int main()
{
    //object creation
    Student s1;
    Student s2;
    
    //value assign to object
    s1.id = 101;
    s1.name = "vipul";
    s1.surname="xyz";
    s1.email="v@gmail.com";
    s1.password="1234";
    
    s2.id = 102;
    s2.name = "himanshu";
    s2.surname="xyz";
    s2.email="v@gmail.com";
    s2.password="1234";
    
    //method call
    s1.display();
    s2.display();
    
    // cout<<"Your id is : "<<s1.id<<endl;
    // cout<<"Your Name is: "<<s1.name<<endl;
    
    // cout<<"Your id is : "<<s2.id<<endl;
    // cout<<"Your Name is: "<<s2.name<<endl;
   

    return 0;
}