#include <bits/stdc++.h>
using namespace std;
// Write a C++ program to implement a class called Student that has private member variables for
// name, class, roll number, and marks. Include member functions to calculate the grade based on the
// marks and display the studens information.
class student
{
    private:
    string name;
    int rollno;
    double marks;
    int class_;
    string grade;
    public:
    student(string name,int rollno,double marks,int class_)
    {
        this->name=name;
        this->rollno=rollno;
        this->marks=marks;
        this->class_=class_;
    }
    void calc_grade()
    {
        int k=marks/10;
        if(k>=4)
        {
            grade="A";
        }
        else
        {
            grade="C";
        }

    }
    void display()
    {
        cout<<"Name: "<<name<<endl;
        cout<<"Rollno: "<<rollno<<endl;
        cout<<"Marks: "<<marks<<endl;
        cout<<"Class: "<<class_<<endl;
        cout<<"grade: "<<grade<<endl;

    }

};
int main()
{
    student *s1=new student("sujal",055,49,12);
    s1->calc_grade();
    s1->display();
    return 0;
}