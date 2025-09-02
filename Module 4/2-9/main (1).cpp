#include<iostream>
using namespace std;

int main()
{
    int marks;
    
   cout<<"Enter Marks";
   cin>>marks;
   
   if(marks>=70)
   {
       cout<<"A Grade"<<endl;
   }
   else if(marks>=60)
   {
       cout<<"B Grade"<<endl;
   }
    else if(marks>=50)
   {
       cout<<"C Grade"<<endl;
   }
    else if(marks>=40)
   {
       cout<<"D Grade"<<endl;
   }
   else
   {
       cout<<"Fail"<<endl;
   }
   
    
    return 0;
}