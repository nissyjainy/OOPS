#include <bits/stdc++.h>
using namespace std;
bool check_prime(int n)
{
    for (int i = 2; i <n; i++)
    {
         if(n%i==0)
         {
            return false;
         }
    }
    return true;
    
}
vector<int> solve(int n)
{
    vector<int> ans;
    for(int i=1;i<=n;i++)
    {
        if(check_prime(i))
        {
            ans.push_back(i);
        }
    }
    return ans;
}
int main()
{
  cout<<"enter n"<<endl;
  int n;
  cin>>n;
  vector<int> ans=solve(n);
  for (auto it:ans)
  {
   cout<<it<<" ";
  }
  return 0;
}