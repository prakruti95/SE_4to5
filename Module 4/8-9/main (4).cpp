#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char fruit[]="mango";
    char fruitans[100];
    
    do
    {
        cout<<"what is my fav. fruit?";
        cin>>fruitans;
    }
    while(strcmp(fruitans,fruit)!=0);
    
     cout<<"You Guessed it"<<endl;
  
    

    return 0;
}