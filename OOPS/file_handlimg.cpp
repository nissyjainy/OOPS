#include <bits/stdc++.h>
using namespace std;
int main()
{
   fstream f1;
   f1.open("data.txt",ios::in);
   string name;
   string age;
   while(f1>>name>>age)
   {
       if(name == "keli")
       {
           cout<<"The age is "<< age<<endl;
       }
   }
   f1.close();
 
   
   cout<<"Enter the name of the person whose age is to be altered"<< endl;
   string n;
   cin>> n;
   fstream f2;
   fstream f3;
   f2.open("data.txt" , ios::in);
   f3.open("k.txt",ios::out | ios::app);
   while(f2>>name>>age) // aa tare che ne read kare che ok
   {
       if(name == n)
       {
           // have tare match thai gayu to tare update kar ok 
           cout<<"Enter the new age of the person"<<endl;
           int age1;
           cin>>age1;
           f3<<name<<" "<< age1;
       }
       else
       {
           f3<<name<< " "<< age;
       }
   }
   //have che ne tu remove kar ok data wali ok 
   f2.close();
   f3.close();
   remove("data.txt");
   rename("k.txt","data.txt");
   return 0;



    
}