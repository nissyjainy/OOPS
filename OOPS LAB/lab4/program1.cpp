#include <bits/stdc++.h>
using namespace std;
// Create a class called student. This class contains data members for name, roll no, and CGPA of a
// student. 1. Provide a no-argument constructor for initializing the data members to some fixed
// value. 2. Provide a 2-argument constructor to initialize the data members to the values sent from
// the calling function. 3. Provide separate setter functions for setting each data member. These
// functions should take the values from user at run-time. 4. Provide separate getter functions for each
// data member. The getter functions should return the value of the corresponding fields. 5. Create a
// function display that displays all the information to user. Let us suppose that we want to keep
// information about average CGPA of students in a particular department. Make appropriate changes
// in the class to handle this extra information (Hint: provide static data members for average CGPA
// and no of students and set the values for these members in constructor). Provide a static function to
// display this additional information.
class student
{
  private:
  string name;
  int rollno;
  double cgpa;
  static int total_students;
  static double total_cgpa;
  public:
  student()
  {
    name="abc";
    rollno=000;
    cgpa=0.00;
    total_students++;
  }
  student(string name,int rollno,double cgpa)
  {
    this->name=name;
    this->rollno=rollno;
    this->cgpa=cgpa;
    total_students++;
    total_cgpa=cgpa+total_cgpa;

  }
  void set_name(string n)
  {
     name=n;
  }
  void set_rollno(int k)
  {
    rollno=k;
  }
  void set_cgpa(double d)
  {
      cgpa=d;
      total_cgpa=total_cgpa+cgpa;
  }
  string ret_name()
  {
    return name;
  }
  double ret_cgpa()
  {
    return cgpa;
  }
  int ret_rollno()
  {
    return rollno;
  }
  void display()
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Rollno: "<<rollno<<endl;
    cout<<"Cgpa: "<<cgpa<<endl;
  }
  void average_cgpa()
  {
    double p=total_cgpa/total_students;
    cout<<"Average cgpa:"<<p<<endl;
  }
};
int student::total_students;
double student::total_cgpa;
int main()
{
    //let's make a array of students
    int n;
    cout<<"enter the number of students"<<endl;
    cin>>n;
    vector<student> v;
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
    //for displying the results..
    v[0].display();
    v[0].average_cgpa();


}