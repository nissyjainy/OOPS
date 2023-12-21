#include <bits/stdc++.h>
using namespace std;
// ahiya tare kai kidhu j nathi ok ki tu kai class vagerah banay ok 
int main()
{
    unordered_map<string,int> m;
    vector<int> ans;
    // user thi input pan levu padshe ok
    int students;
    cout<<"Enter the number of students "<<endl; 
    string roll;
    cout<<"Please enter the RollNo of the students "<<endl;
    for(int i=0;i<students;i++)
    {
        cin>>roll[i];
    }
    // vector ma push kar ok 
    for(int i=0;i<roll.size();i++)
    {
        ans.push_back(roll[i]);
    }
    for(int i =0;i<ans.size();i++)
    {
        m[ans[i]]++;
        //frequency calculate thai gayi che ok 
    }
    for(auto it:m)
    {
        cout<<it.first << " " << it.second << endl;
    }

    
}