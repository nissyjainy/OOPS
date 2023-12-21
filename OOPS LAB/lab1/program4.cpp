#include <bits/stdc++.h>
using namespace std;
pair<int,int> func(vector<int> k)
{
    sort(k.begin(),k.end());
    pair<int,int> p=make_pair(k[0],k[k.size()-1]);
    return p;
}
int main()
{
    cout<<"enter the n"<<endl;
    int n;
    cin>>n;
    vector<int> k;
    for (int i = 0; i <n; i++)
    {
        int c;
        cin>>c;
        k.push_back(c);
    }
    pair <int,int> c=func(k);
    cout<<"Smallest: "<<c.first<<endl;
    cout<<"Largest: "<<c.second<<endl;

    return 0;
}