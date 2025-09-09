#include <iostream>
using namespace std;

class Emp
{
    public:
    
    void getdetails(string name,int num1)
    {
       if(num1==1111)
       {
           cout<<"1st Emp Your Password is abcd"<<endl;
       }
       if(num1==2222)
       {
           cout<<"2nd Emp Your Password is pqrs"<<endl;
       }
        if(num1==3333)
       {
           cout<<"3rd Emp Your Password is erty"<<endl;
       }
        if(num1==4444)
       {
           cout<<"4th Emp Your Password is wert"<<endl;
       }
    }
};

int main()
{
    Emp e1;  
    Emp e2;  
    Emp e3;  
    Emp e4;  
    
    e1.getdetails("sweta",1111);
    e2.getdetails("tirth",2222);
  

    return 0;
}