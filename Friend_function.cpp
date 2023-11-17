#include <bits/stdc++.h>
using namespace std;
class complex
{
    int a, b;

public:
   
    void set_no(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
     friend complex ans(complex o1, complex o2);
    void print()
    {
        cout << a << " "
             << "+" << b << "i" << endl;
    }
};

complex ans(complex o1, complex o2) // a mare ek class che ok b mare alag class che ok

{
    complex o3;
    o3.set_no((o1.a + o2.a) + (o1.b + o2.b));
    return o3;
};
int main()
{
    complex c1, c2, sum;
    c1.set_no(1, 4);
    c1.print();
    c2.set_no(5, 3);
    c2.print();
    sum = ans(c1, c2);
    sum.print();
    return 0;
}