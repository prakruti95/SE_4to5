#include<iostream>
using namespace std;

class Count
{
    public:
    int cal(int a,int b)
    {
        return a+b;
    }
    int cal(int c,int d,int e)
    {
        return c*d*e;
    }
    
};

int main()
{
    Count c = Count();
    cout<<c.cal(6,3);
    cout<<c.cal(6,3,2);

    return 0;
}