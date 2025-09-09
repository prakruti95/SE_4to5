#include <iostream>
using namespace std;

class Student
{
    //data memeber
    public:
    int id;
    string name;
    
};

int main()
{
    Student s1;
    Student s2;
    
    s1.id = 101;
    s1.name = "vipul";
    
    s2.id = 102;
    s2.name = "himanshu";
    
    cout<<"Your id is : "<<s1.id<<endl;
    cout<<"Your Name is: "<<s1.name<<endl;
    
    cout<<"Your id is : "<<s2.id<<endl;
    cout<<"Your Name is: "<<s2.name<<endl;
   

    return 0;
}