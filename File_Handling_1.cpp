// Method 1 
// #include <iostream>
// #include<fstream>

// using namespace std;
// int main()
// { 
//     // used to write in a file using constructor 
//    string s = "Nisarg";
//    string st = "";
//    ofstream out("sample.txt");
//    out<<s;
//    ifstream in("sample2.txt");
//    getline(in,st); // file mathi aa read kare che ok ane st ma nakhe che ok 
//    getline(in,st); // one line at a time ok
// //  file thi input lai lidhu che mei ok 
// //  ane pachi console ma output lau chu ok 
//    cout<<st;
//    return 0;
// }
// Method 2
// #include<iostream>
// #include<fstream>
// using namespace std;
// int main()
// {
//     // jo bhai write kar file ma ok 
//     ofstream outc("sample.txt"); // jo bhai aa wali file ma lakhu chu hu ok 
//     string name;
//     cout<<"Enter the name " ;
//     cin>>name;
//     outc<< "Hello " << name;
//     outc.close();
//     ifstream inc("sample.txt");
//     // content che ae file ni andar no che ok 
//     string content;
//     getline(inc,content);
//     // aa mare che ne console ma aavshe 
//     cout<<"The content of the file is "<<content;
//     inc.close();
// }
//Method 3 
// Open and eof ok  
#include <iostream>
#include <fstream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream out;
    out.open("sample2.txt");
    out<<"Nisarg"<<" ";
    out<<"Yes" ;
    out.close();
    ifstream in; //ifstream mare read karva mate che ok
    string st;
    in.open("sample2.txt");
    while(in.eof()==0)
    {
         getline(in,st);
         cout<<st<<endl; //console par print karva mate che aa ok 
    }
    in.close();

} 



// 
Template<class T>
class nisarg(class T1 = int, class T2 = float, class T3 = double)
// jyare hu int main lakhu chu ok 
// to hu shu kau chu ki jyare tu object banave tyare call kar ok <>