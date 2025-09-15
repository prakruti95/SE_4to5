#include <iostream>  
using namespace std; 

class Account
{
     public:  
       int accno; //data member (also instance variable)      
       string name; //data member(also instance variable)  
       static int count;       
       
        Account(int accno, string name)   
        {    
           
             this->accno = accno;    
             this->name = name;    
             
        }    
       void display()    
        {    
            cout<<accno<<" "<<name<< " "<<count<<endl;   
        }    
       
};

int Account::count=0;

int main()  
{  
     Account a1 =Account(201, "Sanjay"); //creating an object of Employee   
     Account a2=Account(202, "Nakul"); //creating an object of Employee  
     a1.display();    
     a2.display();    
    return 0;  
}  
