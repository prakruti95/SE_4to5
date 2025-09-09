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
    int id1;
    string name1;
    string surname1;
    string email1;
    string password1;
    
    cout<<"Enter Your Id";
    cin>>id1;
    cout<<"Enter Your Name";
    cin>>name1;
    cout<<"Enter Your Surname";
    cin>>surname1;
    cout<<"Enter Your Email";
    cin>>email1;
    cout<<"Enter Your Password";
    cin>>password1;
    
    //object creation
    Student s1;
  
    
    //value assign to object
    s1.id = id1;
    s1.name = name1;
    s1.surname=surname1;
    s1.email=email1;
    s1.password=password1;
    
    if(password1=="tops?123")
    {
        s1.display();
    }
    else
    {
        cout<<"Invalid credentials";
    }
    
    //method call
    
   
    
    // cout<<"Your id is : "<<s1.id<<endl;
    // cout<<"Your Name is: "<<s1.name<<endl;
    
    // cout<<"Your id is : "<<s2.id<<endl;
    // cout<<"Your Name is: "<<s2.name<<endl;
   

    return 0;
}