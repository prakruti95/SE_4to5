#include <iostream>
using namespace std;
class A
{
    public:
    int x = 5;
    
    void display()
    {
       cout << "Value of x is : " << x<<endl;   
    }
    
    
};
class B : public A
{
     public:
     int y = 10;
     
    void display()
    {
        cout << "Value of y is : " << y<<endl;  
    }
    
};
int main()
{
    A *a;
    B b;
    
    a=&b;
    
    a->display();
    
    b.display();

    return 0;
}