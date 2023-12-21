
#include <bits/stdc++.h>
using namespace std;
class employee
{
private:
    string name;
    string department;
    double salary;
    double service_period;

public:
    employee()
    {
        name = "abc";
        department = "xyz";
        salary = 0.00;
        service_period = 0.00;
    }
    employee(string name, string department, double salary, double service_period)
    {
        this->name = name;
        this->department = department;
        this->salary = salary;
        this->service_period = service_period;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
        cout << "Service_period" << service_period << endl;
    }
    void input()
    {
        cout << "enter the name" << endl;
        cin >> name;
        cout << "enter the department" << endl;
        cin >> department;
        cout << "enter the salary" << endl;
        cin >> salary;
        cout << "enter the service period" << endl;
        cin >>service_period;
    }
    // copy constructor
    employee(employee &e2)
    {
        this->name = e2.name;
        //ahiya mare che ne this-> name che ne e1 no che ok e2 mate mare aayu che ok 
        this->department = e2.department;
        this->salary = e2.salary;
        this->service_period = e2.service_period;
    }
    // destructor
    ~employee()
    {
        cout << "successfully deleted" << endl;
    }
};
int main()
{
    employee *e1=new employee();
    e1->input();
    e1->display();
    employee *e2=new employee(*e1);
    e2->display();
    delete e1,e2;
    return 0;
}