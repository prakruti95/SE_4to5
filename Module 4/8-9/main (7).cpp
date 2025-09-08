#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char name[50];
    char name2[50];
    
    cout<<"Enter Your Name";
    cin>>name;
    
    strcpy(name2,name);
    
    cout<<name2<<endl;
  
    
    // cout<<strlwr(name)<<endl;
    // cout<<strupr(name)<<endl;
    
    
    

    return 0;
}