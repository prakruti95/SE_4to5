#include <iostream>
using namespace std;
class Student
{
    public:
    int id=0;
    string name="";
    
    //parameterized constructor
    Student(int id,string name)
    {
       this->id = id;
       this->name = name;
   }
   
    //parameterized constructor
    Student(const Student &old)
    {
        // old is the old object being passed
        id = old.id; //This object's x to old object's x
        name = old.name;

        cout << "Copy Constructor called!\n";
    }
    
    //method    
    void display()
    {
      cout<<"Your id is: "<<id<<endl;
      cout<<"Your name is: "<<name<<endl;
    }
};
int main()
{
    Student s1 = Student(101,"test");
    Student s2 = Student(s1);
  
    s1.display();
    s2.display();
  

    return 0;
}