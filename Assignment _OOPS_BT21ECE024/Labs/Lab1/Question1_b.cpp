#include <bits/stdc++.h>
using namespace std;
vector<int> sequence(int n)
{
   vector<int> ans;
   for(int i=1;i<=n;i++)
   {
    ans.push_back(i);
   }
   return ans;
}
int main()
{
   cout<<"enter the n"<<endl;
   int k;
   cin>>k;
   vector<int> ans=sequence(k);
   for (auto it:ans)
   {
      cout<<it<<" ";
   }
   return 0;
}