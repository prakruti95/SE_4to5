#include<iostream>
using namespace std;

//with para without return type
void cal(int a,int b)
{
    int c= a+b;
    cout<<c<<endl;
}

int main()
{
    int a,b;
    
    cout<<"Enter value for a: ";
    cin>>a;
    
    cout<<"Enter value for b: ";
    cin>>b;
    
    cal(a,b);
    

    return 0;
}