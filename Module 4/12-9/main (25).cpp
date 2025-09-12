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

class C : public A,public B
{
    public:
     void c()
   {
      cout<<"C Called"; 
   }
};


int main()
{
       C c;
        
        c.a();
        c.b();
        c.c();

    return 0;
}