#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    // aa mare che ne base class che ok
    string name;
    int marks;
    // constructor call kar ok
    student(string name=" ", int marks=0)
    {
        this->name = name;
        this->marks = marks;
    }
    // aa mei constructor che ne input hu user thi lau int main ma tyare aavshe ok
    void display1()
    {
        cout << "The name of the student is " << name << endl;
        cout << "The marks of the student is " << marks << endl;
    }
};
class infor : public student
{
public:
    int age;
    int class1;
    //  infor(int age , int class1,string name,int marks){

    //  this->name=name;
    //  this->marks=marks;

    //     this->age = age ;
    //     this -> class1 = class1;
    // }
    // aa mei constructor che ne input hu user thi lau int main ma tyare aavshe ok
    infor(string name = " ",int marks = 0,int age=0, int class1=0)
    {
        this->name = name;
        this->marks = marks;
        this->age = age;
        this->class1 = class1;
    }
    void display2()
    {
        cout << "The age of the student is " << age << endl;
        cout << "The class of the student is " << class1 << endl;
    }
};
class exam : public student
{
public:
    string grade;
    
   exam(string name = " ",int marks = 0,string grade = " " )
   {
      
       this->name = name;
        this->marks = marks;
       this->grade = grade;
   }

    // aa mei constructor che ne input hu user thi lau int main ma tyare aavshe ok
    void display3()
    {
        cout << "The grade of the student is " << grade << endl;
    }
};
int main()
{
    string name;
    int marks;
    int age;
    int class1;
    string grade;

    // jo bhai ahoya che ne mare input levu padshe ok user thi ok getter setter nathi banaya mei ki hu che ne aej direct pass kari dau ok
    cout << "Enter the Name" << endl;
    cin >> name;
    cout << "Marks" << endl;
    cin >> marks;
    cout << "Age" << endl;
    cin >> age;
    cout << "Class" << endl;
    cin >> class1;
    cout << "Grade" << endl;
    cin >> grade;
    infor i1(name,marks,age,class1);
    exam e1(name,marks,grade);
   
    e1.display1();
    e1.display3();
    i1.display1();
    i1.display2();
    return 0;
}