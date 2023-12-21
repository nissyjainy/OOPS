#include <bits/stdc++.h>
using namespace std;
int  solve(int n)
{
   int ans=0;
   while(n!=0)
   {
    int k=n%10;
    ans=ans+k;
    n=n/10;
   }
   return ans;
}
int main()
{
    int c;
    cout<<"enter the number"<<endl;
    cin>>c;
    cout<<solve(c);
}