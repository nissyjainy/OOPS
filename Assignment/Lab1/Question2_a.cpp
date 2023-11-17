#include <bits/stdc++.h>
using namespace std;
int main()
{
     int n ;
    cin>>n;
    cout<<"Enter the numbers to be sorted"<<endl;
   
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"The sorted array is"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    
}