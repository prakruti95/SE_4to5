#include <iostream>
using namespace std;

class RBI
{
    public:
    virtual int rate()
    {
        return 0;
    }
};
class SBI : public RBI
{
     public:
    int rate()
    {
        return 7;
    }
};
class ICICI : public RBI
{
     public:
    int rate()
    {
        return 8;
    }
};
class AXIS : public RBI
{
    public:
    int rate()
    {
        return 9;
    } 
};


int main()
{
    
    RBI *r;
    
    SBI s;
    ICICI i;
    AXIS a;
    
    r = &s;
    cout << r->rate();
    r = &i;
    cout << r->rate();
    r = &a;
    cout << r->rate();
   

    return 0;
}