#include <bits/stdc++.h>
using namespace std;
class machine
{
    public:
    class desktop
    {
       
        string desktop;
        // constructor
        desk(string desktop)
        {
           this->desktop = desktop;
        }
    };
    class lap
    {
        
        string laptop;
        // constructor
        lap(string laptop)
        {
           this->laptop = laptop;
        }
    };
    class tab
    {
        
        string tablet;
        // constructor
        tab(string tablet)
        {
           this->tablet = tablet;
        }
    };

    
    
    //ahiya function lakh ok
    void display1()
    {
        cout<<desktop<<endl;
        cout<<laptop<<endl;
        cout<<tablet<<endl;
    } 

};
int main()
{
    // hu try shu karu chu ki desktop nu naam nakhish ane aeni aakhi specs aai jay mare ok 
    vector<machine*> v;
    // vector ma insert kar ok 
    // jo bhai machine * naam nu vector banay ok ane badhij vastu add kar aema ok 
    machine *m1 = {"HP","8Gb","256Gb","3 core","3Dimension"};
    machine *m2 = {"Dell","16Gb","256Gb","5 core","1Dimension"};
    machine *m3 = {"Apple","8Gb","128Gb","2 core","5Dimension"};
    v.push_back(m1);
    v.push_back(m2);
    v.push_back(m3);
    // badhij vastu tare add thai gayi che ok
    for(int i=0;i<3;i++)
    {
        v[i]->display1();
    } 
    return 0;
        

    
}