#include <bits/stdc++.h>
using namespace std;
class rectangle
{
    public:
    int length,breadth;
    rectangle(int l=0,int b=0)
    {
        this->length=l;
        this->breadth=b;
    }
    void display()
    {
        cout<<length<<endl;
        cout<<breadth<<endl;
    }
    void area()
    {
        cout<<"Area: "<<length*breadth<<endl;
    }
    void perimeter()
    {
        cout<<"perimeter: "<<2*(length+breadth)<<endl;
    }
    
};
int main()
{
   rectangle r;
   r.length=10;
   r.breadth=15;
   r.display();
   r.area();
   r.perimeter();
   return 0;
}