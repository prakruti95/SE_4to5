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

class B 
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
class D : public B,public C
{
     public:
     void d()
   {
      cout<<"D Called"; 
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