#include <iostream>
using namespace std;

class Emp
{
    public:
    
    string name,surname;
    
    void setname(string name) 
    {
		this->name = name;
	}
    
    string getname()
    {
        return name;
    }
    
    void setsurname(string surname) 
    {
		this->surname = surname;
	}
    
    string getsurname()
    {
        return surname;
    }
    
    
    void display()
    {
       
        cout<<name<<endl;
        cout<<surname<<endl;
    }
};

int main()
{
    Emp e1;
    
    e1.setname("abcd");
    cout<<e1.getname();
    e1.setsurname("xyz");
    cout<<e1.getsurname();
    
    // e1.id=101;
    // e1.name="abcd";
    
    // cout<<e1.id<<endl;
    // cout<<e1.name<<endl;
    return 0;
}