#include <bits/stdc++.h>
using namespace std;
class employee
{
       public:
     string name;
     string phone;
    // paramitrised banay ok 
 
    employee(string name,string phone)
    {
        this->name = name;
        this->phone = phone;
    }
    void input()
    {
        cout<<"Enter the name of the employee"<<endl;
        cin>>name;
        cout<<"Enter the phone number of employee"<<endl;
        cin>>phone;
    }
    void display()
    {
        cout<<"The name of the employee is "<<name <<endl;
        cout<<"The phone of the employee is"<<phone<<endl;
    }
    //copy constructor

    employee(employee &e2)
    {
        this->  name = e2.name;
         this-> phone = e2.phone;
    }
    
    
};
int main()
{
      employee *e1=new employee();
    e1->input();
    e1->display();
    employee *e2=new employee(*e1);
    e2->display();
    
    return 0;
   

}