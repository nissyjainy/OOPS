#include <bits/stdc++.h>
using namespace std;
//Write a program to illustrate default constructor, parameterized constructor and copy
//constructors
class student
{
    private:
    string name;
    int age;
    string rollno;
    public:
    //default or non-parameterized constructor
    student()
    {
        name=" ";
        age=0;
        rollno="xxx";
    }
    //parameterized constructor
    student(string name,int age,string rollno)
    {
        this->name=name;
        this->age=age;
        this->rollno=rollno;
    }
    //copy constructor
    student(student &s)
    {
        this->age=s.age;
        this->name=s.name;
        this->rollno=s.rollno;

    }
    //display function
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"RollNO: "<<rollno<<endl;
    }
};
int main()
{
  student s1;
  student s2("abc",15,"bt21ece135");
  student s3(s2);
  s1.display();
  s2.display();
  s3.display();
  return 0;
}