#include<bits/stdc++.h>
using namespace std;
bool status=false;
class bank{
   public:
    string name;
    string accountNo;
    string accountName;
    int balance;

    //constructor
   bank(string name, string accountNo, string accountName , int balance)
   {
       this ->name = name;
       this -> accountNo = accountNo;
       this -> accountName = accountName;
       this -> balance = balance;
   }
    bool search(string s)
    {
        if(accountNo==s)
        {
            return true;
        }
        return false;
    }
   bool deposit (string account,int depositmoney,int &balance )
   {
      // check kar account no exist kare che ki nahi 
     
      
           balance = balance + depositmoney;
           cout<<"The money has been successfully deposited "<<balance<<endl;        
           return true;
     
   }
   bool withdraw(string account,int withdrawmoney,int &balance )
   {
      if(withdrawmoney>balance)
      {
          cout<<"Insufficient balance"<<endl;
          return false;
      }
      else
      {
          balance = balance - withdrawmoney ;
          cout<<"The amount has been successfully withdrawed " << balance <<endl;
          return true;
      }

   }
   void display()
   {
      cout<<name<<endl;
      cout<<balance<<endl;
   }
};
    

int main()
{
   // aacount no input le ok 
   // amount o be deposited input le 
   // n input le ok
   vector<bank*> customer;
   bank* b1=new bank("Nisarg","15515","current",5252525);
   bank* b2=new bank("Manish","123456","saving",10000);
   bank* b3=new bank("Shalini","214563","current",456123);
   bank* b4=new bank("Sarla","789456","saving",789456);
   customer.push_back(b1);
   customer.push_back(b2);
   customer.push_back(b3);
   customer.push_back(b4);
   cout<<"enter the account number"<<endl;
   string s;
   cin>>s;
   cout<<"enter the amount of money you want to deposit"<<endl;
   int rupees;
   cin>>rupees;
      cout<<"enter the amount of money you want to withdraw"<<endl;
   int withdrawmoney;
   cin>>withdrawmoney;
   
   for (int i = 0; i <4; i++)
   {
      if(customer[i]->search(s))
      {
          customer[i]->deposit(s,rupees,customer[i]->balance);  
          customer[i]->withdraw(s,withdrawmoney,customer[i]->balance);
          customer[i]->display();      
          status=true;
      }

   }
  if(!status)
  {
     cout<<"Please enter the correct information"<<endl;
  }
   
   return 0;
   
}
