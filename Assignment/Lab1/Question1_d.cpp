#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the size of the array"<<endl;
   int n;
   cin>>n;
   int arr[n];
   cout<<"Enter the numbers to be sorted"<<endl;
   for(int i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   sort(arr,arr+n);
   cout<<"The smallest number is "<< arr[0] <<endl;
   cout<<"The largest number is "<< arr[n-1] <<endl;

   
    
}
    
