#include <bits/stdc++.h>
using namespace std;
// jo bhai virtual base ma to khali mare virtual keyword j use karvano che ok baki tare aakhu same j che ok  
class student
{
    protected:
    int roll_no;
    public:
    void set_no(int a)
    {
        roll_no = a;
        //ahiya mare che ne roll number set thay che ok 

    }
    void print_no()
    {
        cout<<"Your roll number is "<<roll_no<<endl;
    }
};
class test : virtual public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1,float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout<<"You have obtained "<< maths<<" in maths"<<endl;
        cout<<"You have obtained "<< physics<<" in physics"<<endl;
    }

};
class sports: virtual public student
{
    protected:
    float score;
    public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
         cout<<"You have obtained "<< score<<"in PE."<<endl;
    }
};
class result: public test, public sports
{
   private:
   float total;
   public:
   void display()
   {
      cout<<"Total marks obtained are "<<maths+physics+score<<endl;
      print_marks();
      print_no();
      print_score();
   }
};
int main()
{
    // have che ne derived class no object banay ok 
    result r1;
    r1.set_no(24);
    r1.set_marks(89,99);
    r1.set_score(34);
    r1.display();
  // jo bhai hu shu kau chu tare che ne virtual keyword j use kar ok 
  // parametrised constructor to  use karyu che pan mei che ne value assign kari che ok ane main ma value nakhi che ok ae j tare constructor ma aayu che ok 

    return 0;
    
}