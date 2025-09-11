#include <iostream>
using namespace std;

class A
{
    public:
    void a()
    {
        cout<<"A called"<<endl;
    }
};
class B : public A
{  
    public:
    void b()
    {
        cout<<"B called"<<endl;
    }
    
};

int main()
{
  
    B b;
    
    b.a();
    b.b();

    return 0;
}