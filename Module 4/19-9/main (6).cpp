#include <iostream>  
using namespace std;  

void checkage(int x)
{
   if(x<18) 
   {  
      throw "Not Eligible to vote";  
   }  
   else
   {
       cout<<"Eligible to vote";
   }

}
int main () 
{  
    int age = 15;
   
   try
   {
     checkage(age);
    
   }
   catch(const char* e)
   {
       cerr<< e << endl;  
   }
  
   return 0;  
}  

