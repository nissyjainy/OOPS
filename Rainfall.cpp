#include <bits/stdc++.h>
using namespace std;
class rain
{
    public:
    vector<int> rainfall;
    //constructor()
    rain(vector<int> rainfall)
    {
          this->rainfall = rainfall;
    } 
    void monthly_amounts(vector<int> rainfall,int months)
    {
        for(int i=0;i<months;i++)
        {
            cout<<rainfall[i]<<endl;
            // darek month nu mei output lidhu che ok 
        }
        

    }
    void total_amount(vector<int> rainfall)
    {
        int n = accumulate(rainfall.begin(),rainfall.end(),0);
        cout<<"The total amount of the rainfall in the given period of time is "<< n <<endl;
    }
    void average_amount(vector<int> rainfall)
    {
        int n = accumulate(rainfall.begin(),rainfall.end(),0);
        cout<<"The total amount of the rainfall in the given period of time is "<< (float)n/2 <<endl;
    }
    void highest_amount(vector<int> rainfall)
    {
        sort(rainfall.begin(),rainfall.end());
        int f = rainfall.size();
        cout<<"The highest amount of the rainfall in the given period of time is "<< rainfall[f-1] <<endl;
    }
    void lowest_amount(vector<int> rainfall)
    {
        sort(rainfall.begin(),rainfall.end());
        int f = rainfall.size();
        cout<<"The lowest amount of the rainfall in the given period of time is "<< rainfall[0] <<endl;
    }
};
int main()
{
    int months;
    cout<<"Enter the number of months for which you need to get the info "<<endl;
    cin>>months;
    vector<int> rainfall;
    cout<<"Enter the rainfall in each month "<<endl;
    for(int i=0;i<months;i++)
    {
        int k;
        cin>>k; 
        rainfall.push_back(k);
    }
    // rainfall input lai likhu che ok 
    int d;
    cout<<"Enter the choice that you need to choose "<<endl;
    cin>>d;
    // ahiya tu call kar ok 
    rain r1(rainfall);
   
     
        switch(d)
        {
            case 1:
            r1.monthly_amounts(rainfall,months);
            break;
            case 2:
            r1.total_amount(rainfall);
            break;
            case 3:
            r1.average_amount(rainfall);
            break;
            case 4:
            r1.highest_amount(rainfall);
            break;
            case 5:
            r1.lowest_amount(rainfall);
            break;
            case 6:
             cout<<"Please enter a valid number "<<endl;
             break;
        }
       

        return 0;
    
    
}