#include <iostream>
using namespace std;

class Emp
{
    //constructor
    public:
    
    Emp()
    {
      cout<<"consructor called";  
    }
    
    void display()
    {
        cout<<"display called";
    }
    
};

int main()
{
    Emp e;
  
    
    return 0;
}