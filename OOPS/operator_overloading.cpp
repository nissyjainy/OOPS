// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {
//     int real , imag;
//     public:
//     Complex ()
//     {
//         real = 0;
//         imag = 0;
//     }
//     Complex(int r ,int i)
//     {
//         // jo tu ahiya che ne initialize kari de che ok 
//         // pela ma to tu che ne user thi j le che input ok 
//         real = r;
//         imag = i;
//     }
//     void print()
//     {
//         cout<<"The complex number is"<<real<<"+"<<imag<<"i"<<endl;
//     }
//     Complex operator -(Complex c)
//     {
//         Complex  temp;
//         temp.real = real - c.real;
//         temp.imag = imag - c.imag;
//         return temp;
//         // ahiya tare che ne complex return karvanu che atle temp complex lidhu che ok 
//     }
// };
// int main()
// {
//     Complex c1(5,4);
//     Complex c2(2,5);
//     Complex c3;
//     // c3 = c1+c2; c3 = c1.add(c2);
//     //nahi thay ok objects add na thay ok ahiya operator overlaoding thay ok 
//     c3 = c2-c1;
//     // c1++; aa che ne uninary increment che ok 
//     c3.print();
//   return 0;  
    
// }

#include <bits/stdc++.h>
using namespace std;
class location
{
    public:
    int x,y;
    location()
    {
        x =0;
        y =0;
        // aa che ne mare l1 mate che ok
    }
    location (int longi,int lati)
    {
        x = longi;
        y = lati;
    }
    void print()
    {
        cout<<"The resultant longitude is"<<x<<endl;
        cout<<"The resultant latitude is"<<y<<endl;
    }
    location operator -(location l)
    {
        location temp ;
        temp.x = x - l.x;
        temp .y = y - l.y;
        return temp;
    }
    location operator +(int a)
    {
        location temp ;
        temp.x = x +a;
        temp .y = y +a;
        return temp;
    }
   
    
};
int main()
{
 location l2(100,150);
 
 location l3(50,75);// junu je rite karyu hatu ae pan chalshe ok 
 location l1;
 l1 = l2-l3;
 l1.print();
 int a;
 cout<<"Enter the value of a"<<endl;
 cin>>a;
 l1 = l2+a;
 l1.print();
 
 return 0;  
    
}