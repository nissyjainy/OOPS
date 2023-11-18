// #include <bits/stdc++.h>
// using namespace std;
// class Complex
// {
//     // by defalut che ne class private hoy che ok 
//     int a,b;
//     public:
//     //friend function ok 
//     friend Complex result(Complex o1,Complex o2);
//     //take as object as the input 
//     void set_data(int n1,int n2)
//     {
//         a = n1;
//         b = n2;
//     }
//     void print()
//     {
//         cout<<"The complex number is " << a <<"+"<<b<<"i"<<endl;
//     }
// };
//  /*class result(int o1,int o2)
//  {
//      result o3;
//      jo bhai hu shu kau chu tare che ne navu koi class nathi ok 
//      aej class ma che tare ok 

//  }*/
//  Complex result(Complex o1,Complex o2)
//  {
//     //input ma to tare 2 complex number j aave che ne
//     Complex o3;
//     o3.set_data((o1.a+o2.a), (o1.b+o2.b));
//     return o3;
//     // ahiya tare che ne bija class na member ke variable ne khali access kare che bas
//  }
// int main()
// {
    
//     Complex c1;
//     c1.set_data(4,6);
//     c1.print();
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// class Complex;
// // aa tare che ne forward declaration che ok 
// class calculator
// { 
//     public:
   
//      int add(int a ,int b)
//      {
//          return a + b;
//      }
//      int sumreal(Complex,Complex);
//      int sumcomp(Complex,Complex);
//      // ahiya hu shu kau chu tare che ne complex wali je class che ne aeno input tane sum real ma aavshe ok 
// };
// class Complex
// {
//     public:
//      int a,b;
//     //  friend int calculator:: sumreal(Complex,Complex);
//     friend class calculator;
//     // aakhi class ne j friend banai didhi 
//      void set_data(int n1,int n2)

//      {
//          a = n1;
//          b = n2;   
//      }
//      void print_data()
//      {
//          cout<<"The complex number is "<< a <<"+"<< b<<"i"<<endl;
//      }

// };
// int calculator:: sumreal(Complex o1,Complex o2)
// {
//      return (o1.a + o2.a);
// }
// int calculator:: sumcomp(Complex o1,Complex o2)
// {
//      return (o1.b + o2.b);
// }
// int main()
// {
//     Complex c1,c2;
//     c1.set_data(1,6);
//     c2.set_data(2,7);
//     calculator calc;
//     int res = calc.sumreal(c1,c2);
//     int ans = calc.sumcomp(c1,c2);
//     cout<<"Result "<<res<<endl;
//     cout<<"Ans"<<ans<<endl;
//     return 0;
    
// }



#include <bits/stdc++.h>
using namespace std;
class Y;
class X
{
    //ahiya a ane b private che tu public karshe to chalshe 
    int a;
    public:
    void set_X(int n1)
    {
        a = n1;
    }
     friend void res(X,Y);

};
class Y
{
    int b ;
    public:
    void set_Y(int n2)
    {
        b = n2;
    }
      friend void res(X,Y);
};
void res(X o1,Y o2)
// ahiya mare X no o1 object che ok 
{
      cout<<"Result"<<o1.a+o2.b<<endl;
}
int main()
{
   X a1;
   a1.set_X(4);
   Y b1;
   b1.set_Y(7);
   res(a1,b1);
   return 0;
    
}


// swaping using the friend function ok