#include <bits/stdc++.h>
using namespace std;
bool status = false;
class Nirma
{
public:
    string name;
    int age;
    string email;
    int roll;
    // constructor
    Nirma(string name, int age, string email, int roll)
    {
        this->name = name;
        this->age = age;
        this->email = email;
        this->roll = roll;
    }
    // function name mate
    void name1(string a)
    {
        // kahli name ane badhi vastu print karvama vandho nathi mare
        if (name == a)
        {
            cout << "You belong to Nirma family" << endl;
        }
        else
        {
            cout << "Jaldi waha se hato " << endl;
        }
    }
    void age1(int b)
    {
         if(b==age )
         {
             cout<<"Badhai Ho"<<endl;
         }
         else 
         {
              cout<<"Kripiya sahi age daliye"<<endl;
         }
    }
    void email1(string s)
    {
         if(s==email)
         {
             cout<<"Badhai Ho aapka email match ho chuka hai "<<endl;
         }
         else 
         {
              cout<<"Kripiya sahi email daliye"<<endl;
         }
    }
    void roll1(int c)
    {
         if(c==roll)
         {
             cout<<"Badhai Ho aap ka college mei swagat hai "<<endl;
         }
         else
         {
              cout<<"Kripiya sahi roll  daliye varna bhag jaiye"<<endl;
         }
    }


    void display()
    {
        cout << name << endl;
        cout << age << endl;
        cout << email << endl;
        cout << roll << endl;
    }
};
int main()
{
    vector<Nirma *> v;
    Nirma *n1 = new Nirma{"Nisarg", 21, "nisargjain@gmail.com", 24};
    Nirma *n2 = new Nirma{"Akshat", 21, "akshat@gmail.com", 240};
    Nirma *n3 = new Nirma{"Manish", 51, "manish@gmail.com", 23};
    v.push_back(n1);
    v.push_back(n2);
    v.push_back(n3);
    string a;
    cout << "Enter the name" << endl;
    cin >> a;
    int b;
    cout << "Please enter the age" << endl;
    cin >> b;
    string s;
    cout << "Enter the valid email" << endl;
    cin >> s;
    int c;
    cout << "Please enter the roll" << endl;
    cin >> c;
    // vector display karie che n
    for (int i = 0; i < 3; i++)
    {
        v[i]->name1(a);
        v[i]->age1(b);
        v[i]->email1(s);
        v[i]->roll1(c);
        status = true;

        // v[i]->display();
    }
    if(status==false)
    {
        cout<<"Bhago"<<endl;
    }
    return 0;
}