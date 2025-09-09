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
    
    s1.id = 101;
    s1.name = "vipul";
    
    cout<<"Your id is : "<<s1.id<<endl;
    cout<<"Your Name is: "<<s1.name<<endl;
   

    return 0;
}