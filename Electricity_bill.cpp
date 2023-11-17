#include <bits/stdc++.h>
using namespace std;
class electricity
{
    public:
    int units;
    int bill=0;
    
    // constructor banay ok 
    electricity(int units)
    {
        this->units = units;
        
    }
   void charges(int &units)
    {
        if(units>=1 && units<=100)
        {
            bill=2*units;
        }
        else if(units>100 && units<=200)
        {
           bill= 3.5*units;
        }
        else if(units>200)
        {
            bill= 4.5*units;
        }
        cout<<"your electricity bill is "<<bill<<endl;
    }
    void generaltax()
    {
        cout<<"general tax"<<0.1*bill<<endl;
    }
    void totalbill()
    {
        cout<<"your total bill is "<<1.1*bill<<endl;
    }


};
int main()
{
    vector<electricity*> v;
    electricity* v1 = new electricity(50);
   electricity* v2 = new electricity(500);
   electricity* v3 = new electricity(150);
   electricity* v4 = new electricity(100);
   v.push_back(v1);
   v.push_back(v2);
   v.push_back(v3);
   v.push_back(v4);
   
   for(int i=0;i<4;i++)
   {
      v[i]->charges(v[i]->units);
      v[i]->generaltax();
      v[i]->totalbill();
      
   }
   return 0;
    
}