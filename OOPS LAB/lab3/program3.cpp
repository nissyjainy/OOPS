#include <bits/stdc++.h>
using namespace std;
// Write a C++ program to implement a class called Employee that has private member variables for
// name, employee ID, and salary. Include member functions to calculate and set salary based on
// employee performance.
class employee
{
    private:
    string name;
    int employee_id;
    double salary;
    public:
    //constructor
    employee(string name=" ",int employee_id=0,double salary=0)
    {
        this->name=name;
        this->employee_id=employee_id;
        this->salary=salary;
    }
    //display function()
    void display()
    {
       cout<<"Name: "<<name<<endl;
       cout<<"Employee Id: "<<employee_id<<endl;
       cout<<"Salary: "<<salary<<endl;
    }
    void set_salary(double performance)
    {
         salary=performance*1000;
    }
    void set_name(string s)
    {
        this->name=s;
    }
    void set_eid(int b)
    {
       this->employee_id=b;
    }
};
int main()
{
 employee e1;
 e1.set_name("sujal");
 e1.set_eid(055);
 cout<<"enter the performance value"<<endl;
 int l;
 cin>>l;
 e1.set_salary(l);
 e1.display();
 return 0;


}