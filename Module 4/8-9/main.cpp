#include<iostream>
using namespace std;

//with para with return type
int cal(int a,int b)
{
    return a+b;
}

int main()
{
    int a,b;
    
    cout<<"Enter value for a: ";
    cin>>a;
    
    cout<<"Enter value for b: ";
    cin>>b;
    
    cout<<"Addition of two value is :"<<cal(a,b);
    

    return 0;
}