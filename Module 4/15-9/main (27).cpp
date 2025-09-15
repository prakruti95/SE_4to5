#include <iostream>
using namespace std;

class Student
{
    public:
    int id;
    string name;
    
    Student()
    {
        cout<<"Constructor called";
    }
    
    ~Student()
    {
        cout<<"Destructor called";
    }
    
    
    
};

int main()
{
    Student s = Student();
    

    return 0;
}