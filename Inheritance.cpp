#include <bits/stdc++.h>
using namespace std;
class A
{
    public:
    string name;
    int ID;
    void set_a()
    {
        cout<<"Enter the name of the students"<<endl;
        cin>>name;
        cout<<"Enter the ID of the students"<<endl;
        cin>>ID;
    }

};
class B : public A
{
    
    string phonenumber;
    int marks;
    public:
    void set_b()
    {
        cout<<"Enter the phone number of the student"<<endl;
        cin>>phonenumber;
        cout<<"Enter the marks of the students"<<endl;
        cin>>marks;
    }
    void get_b()
    {
        cout<<"The details of the students are--"<<endl;
        cout<<"The name of the student is "<< name <<endl;
        cout<<"The ID of the student is "<< ID <<endl;
        cout<<"The phone number of the student is "<< phonenumber<<endl;
        cout<<"The marks of the student is "<< marks<<endl;
    }
};
int main()
{
    B b1;
    // b1.set_a();
    b1.set_b();
    b1.get_b();
    return 0;
    
}