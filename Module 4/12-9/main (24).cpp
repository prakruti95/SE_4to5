#include <iostream>
using namespace std;

class A
{
   public:   
   void a()
   {
      cout<<"A Called"; 
   }
};

class B : public A
{
    public:
    void b()
   {
      cout<<"B Called"; 
   } 
};

class C : public A
{
    public:
     void c()
   {
      cout<<"C Called"; 
   }
};


int main()
{
        B b;
        C c;
        
        b.a();
        b.b();
        c.c();

    return 0;
}