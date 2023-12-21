#include <bits/stdc++.h>
using namespace std;
class employee
{
    public:
    string name;
    string ID;
    int salary;
    char emp_performance;
    //construcutor bnay ok 
    employee(string name , string ID,int salary,char emp_performance)
    {
        this->name = name;
        this->ID=ID;
        this->salary = salary;
        this-> emp_performance = emp_performance;

    }
    void performance(char emp_performance)
    {
         
          if(emp_performance=='A')
          {
             salary = salary + 0.8*salary;
          } 
          else if(emp_performance=='B')
          {
             salary = salary + 0.7*salary;
          } 
           else if(emp_performance=='C')
          {
             salary = salary + 0.5*salary;
          } 
           else if(emp_performance=='D')
          {
             salary = salary + 0.3*salary;
          } 
          else
         {
            cout<<"Sorry you have very bad performance"<<endl;
         }
    }
    void display()
    {
        cout<<name<<endl;
        cout<<ID<<endl;
        cout<<salary<<endl;
    }
};
int main()
{
    
    char emp_performance;
    string name;
    string ID;
    int salary;
    cout<<"Enter the name of the employee"<<endl;
    cin>>name;
      cout<<"Enter the ID of the employee"<<endl;
    cin>>ID;
    cout<<"Enter the salary of the employee"<<endl;
    cin>>salary;
      cout<<"Enter the performance of the employee"<<endl;
    cin>> emp_performance;
    employee e1(name,ID,salary,emp_performance);
    e1.performance(emp_performance);
    e1.display();
    return 0;
    
}