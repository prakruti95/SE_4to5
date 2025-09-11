#include<iostream>
using namespace std;

class student
{
    public:
    
    string name;
    string surname;
    string email;
    int password;
    
    student(string name,string surname,string email,int password)
    {
     this->  name = name;
     this-> surname = surname;
     this-> email = email;
     this-> password = password;
        
    }
    
    void verify()
    {
        if(password==1234)
        {
            cout<<"\nname:"<<name;
            cout<<"\nsurname:"<<surname;
            cout<<"\nemail:"<<email;
                                
        }
        else
        {
            cout<<"\nwrong pass";
        }
    }
};


int main()
{
    string name,surname,email;
    int password;
    
    cout<<"enter name : ";
    getline(cin,name);
    
    cout<<"enter surname : ";
    getline(cin,surname);
    
    cout<<"enter email : ";
    getline(cin,email);
    
    cout<<"enter pass : ";
    cin>>password;
    
    student s1(name,surname,email,password);
    
    
    s1.verify();

    
    
    
    

    return 0;
}