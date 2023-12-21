#include <bits/stdc++.h>
using namespace std;
class person
{
    private:
    string name;
    int age;
    public:
    person(string name,int age )
    {
        this->name=name;
        this->age=age;
    }
    ~person()
    {
        cout<<"deleted person"<<endl;
    }
};
int main()
{
       person *p1=new person("a",15);
       person *p2=new person("b",25);
      delete p1;
      delete p2;
      return 0;

}