#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int class1;
    int roll;
    int marks;
    //construcutor banay ok 
    student(string name,int class1,int roll,int marks)
    {
        this->name = name;
        this->class1 = class1;
        this-> roll = roll;
        this -> marks = marks;
    }
    void display()
    {
        cout<<"The name of the student is "<<name<<endl;
        cout<<"The class of the student is "<<class1<<endl;
        cout<<"The roll of the student is "<<roll<<endl;
        cout<<"The marks of the student is "<<marks<<endl;
    
    }
    void grade(int &marks)
    {
       
        if(marks>=80)
        {
            cout<<"Congratulations you are passed with A grade"<<endl;
        }
        else if(marks>=60 && marks<80)
        {
            cout<<"Congratulations you are passed with B grade"<<endl;
        }
        
        else if(marks>=40 && marks<60)
        {
            cout<<"Congratulations you are passed with C grade"<<endl;
        }
        else
        {
            cout<<"Sorry you are fail"<<endl;
        }
    }
};
int main()
{
   string name;
   int class1;
   int roll;
   int marks;
   cout<<"Enter the name of the student"<<endl;
    cin>>name;
      cout<<"Enter the class of the student"<<endl;
    cin>>class1;
    cout<<"Enter the roll of the student"<<endl;
    cin>>roll;
      cout<<"Enter the marks of the student"<<endl;
    cin>> marks;
    student s1(name,class1,roll,marks);
    // ahiya tare aa object call kare che ok 
    s1.display();
    s1.grade(marks);
    return 0;
}