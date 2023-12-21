#include <bits/stdc++.h>
using namespace std;
void sorter(vector<int> &k)
{
    sort(k.begin(),k.end());
}
int main()
{
    cout<<"enter n"<<endl;
    int n;
    cin>>n;
    vector<int> ans;
    for (int i = 0; i <n; i++)
    {
        int c;
        cin>>c;
        ans.push_back(c);
    }
    sorter(ans);
    for (auto it:ans)
    {
        cout<<it<<" ";
    }
    return 0;
}