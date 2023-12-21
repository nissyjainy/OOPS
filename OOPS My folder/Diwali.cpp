#include <bits/stdc++.h>
using namespace std;
class diwali
{
    public:
    int person;
    vector<int>age;
    int hour;
    
    //constructor()
    diwali(int person,vector<int>age,int hour)
    {
        this->person = person;
        this->age = age;
        this->hour = hour;
        
    }
    
        void discovery(int &age)
        {
            int price = 100;
            if(age<=10)
            {
              cout<<"You are not allowed to sit on the ride"<<endl;
              
            }
            else if(age>10 && age<=15)
            {
                price = price - 0.1*price;
                cout<<"You will have to pay "<< price <<endl;
            }
            else if(age>15 && age<=20)
            {
                price = price - 0.05*price;
                cout<<"You will have to pay " << price <<endl;
            }
            else
            {
                cout<<"You are not allowed for any type of discount"<<endl;
            }
        }
        void maryland(int age)
        {
                int price = 100;
            if(age>=1 && age<=5)
            {
                price = price - (price/2) ;
              cout<<"You will have to pay "<< price <<endl;
              
            }
            else if(age>5 && age<=10)
            {
                price = price - (price/4);
                cout<<"You will have to pay "<< price <<endl;
            }
           
        }
        void parking(int hour)
        {
            int parkingprice;
            cin>>parkingprice;
            parkingprice = 10*hour;
            cout<<"You will have to pay the parkingprice"<<parkingprice<<endl;
        }
    };

int main()
{
  // jo ahiya tare person no input le ane age no input le ok 
  // pachi function call kar mary land and bija karvana ok 
  int person;
  cout<<"Enter the number of the person going to vacation"<<endl;
  cin>>person;
  vector<int> age;
   cout<<"Enter the age of the person "<<endl;
  for(int i=0;i<person;i++)
  {
       int k;
       cin>>k;
       age.push_back(k);
  }
  int hour;
  cout<<"Enter the number of hours you need to enjoy"<<endl;
  cin>>hour;
  diwali l1(person,age,hour);
  for (int i = 0; i <age.size(); i++)
  {
       int h=age[i];
        l1.discovery(h);
        l1.maryland(h);
  }
  
 
  l1.parking(hour);
  return 0;


}