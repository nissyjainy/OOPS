#include <bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    int CGPA;
    static int total_members;
    static double total_CGPA;
    student()
    {
        // normal constructor
        name = "abc";
        roll = 0;
        CGPA = 0;
        total_members++;
        //aama tare che ne constructor thi che ne members banave che ok to total memebers tare je che je mei input lidhu che ae increase thay che ok 
    }
    student(string name,int roll,int CGPA)
    {
        this->name = name;
        this->roll = roll;
        this->CGPA = CGPA;
        total_members++;
        total_CGPA = total_CGPA + CGPA;
    }
    void set_name(string n)
  {
     name=n;
  }
  void set_rollno(int k)
  {
    roll=k;
  }
  void set_cgpa(double d)
  {
      CGPA=d;
      total_CGPA=total_CGPA+d;
  }
  string ret_name()
  {
    return name;
  }
  double ret_CGPA()
  {
    return CGPA;
  }
  int ret_rollno()
  {
    return roll;
  }
    void display()
    {
        cout<<"The name of the student is"<<name<<endl;
        cout<<"The roll of the student is"<<roll <<endl;
        cout<<"The CGPA of the student is "<<CGPA<<endl;
    }
    void avg_CGPA()
    {
        double p = total_CGPA/total_members;
        cout<<"The average CGPA of the students are"<<p<<endl;
    }
};
int student::total_members;
double student::total_CGPA;
int main()
{
    
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    vector<student> v;
    // vector aakha student ne j lai le che ok 
    for (int i = 0; i <n; i++)
    {
         string s;
         int k;
         double h;
        cout<<"Enter the name"<<endl;
        cin>>s;
        cout<<"enter the roll no"<<endl;
        cin>>k;
        cout<<"enter the cgpa"<<endl;
        cin>>h;
        student s1(s,k,h);
        v.push_back(s1);
    }
    //badha karva mate che ne mare for loop lagava thi pan thai jashe ok 
    v[0].display();
    v[0].avg_CGPA();

}