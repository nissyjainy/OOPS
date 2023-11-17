#include <bits/stdc++.h>
using namespace std;
//global varisble 


class num
{
    //constructor banay ok 
    public:
    num()
    {
       
        cout<<"The constructor has been created"<<endl;
    }
    ~num()
    {
        cout<<"The dectructor has been created"<<endl;
       
    }
};
int main()
{
    //have jo tare object banshe ok to tare che ne directly che ne constructor to create thai j jay che ok 
    // ane object no scope pati jay tyare che destructor aavshe ok 
    num n1;
    {
        num n2,n3;
        cout<<"Hello"<<endl;

    }
    
}