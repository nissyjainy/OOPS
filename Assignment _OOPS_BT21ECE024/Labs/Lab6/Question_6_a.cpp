// Write a Template Based Program to Sort the Given List of Elements.
#include <bits/stdc++.h>
using namespace std;
template <class T>
void sort(vector<T> &v, int n)
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
int main()
{
    cout << "enter the number of students" << endl;
    int n;
    cin >> n;
    vector<int> v;
    vector<char> c;
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the value"<<endl;
        int p;
        cin >> p;
        v.push_back(p);
    }
    sort<int>(v, n);
    for (int i = 0; i < n; i++)
    {
        cout<<"enter the value"<<endl;
        char d;
        cin >> d;
        c.push_back(d);
    }
    sort<char>(c, n);
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    for (auto it : c)
    {
        cout << it << " ";
    }
    return 0;
}