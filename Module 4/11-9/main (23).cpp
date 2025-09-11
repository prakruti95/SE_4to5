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
class C : public B
{  
    public:
    void c()
    {
        cout<<"C called"<<endl;
    }
    
};
class D : public C
{  
    public:
    void d()
    {
        cout<<"D called"<<endl;
    }
    
};

int main()
{
  
    D d;
    
    d.a();
    d.b();
    d.c();
    d.d();
    
    
    return 0;
}