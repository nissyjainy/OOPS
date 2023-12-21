// Write a C++ program that uses function templates to find the largest and smallest number in a list
// of integers and to sort a list of numbers in ascending order.
#include <bits/stdc++.h>
using namespace std;
template <class T>
class sorter
{
private:
    vector<T> v;
    int n;

public:
    sorter(vector<T> v)
    {
        this->v = v;
        this->n = v.size();
    }
    void sort()
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (v[i] > v[j])
                {
                    swap(v[i], v[j]);
                }
            }
        }
    }
    void smallest()
    {
        cout<<"Smallest: "<<v[0]<<endl;
    }
    void largest()
    {
        cout<<"Largest: "<<v[n-1]<<endl;
    }
    void display()
    {
        for (auto it:v)
        {
            cout<<it<<" ";
        }
        
    }
};
int main()
{
    cout<<"enter the number of elements"<<endl;
    int n;
    cin>>n;
    vector<int> v;
    for (int i = 0; i <n; i++)
    {
        int c;
        cin>>c;
        v.push_back(c);
    }
    
    sorter<int> s1(v);
    s1.sort();
    s1.smallest();
    s1.largest();
    s1.display();
}