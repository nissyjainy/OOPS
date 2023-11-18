// #include <bits/stdc++.h>
// using namespace std;
// class Baseclass
// {
//     public:
//     virtual void display()
//     {
//         cout<<"Displaying the base function"<<endl;
//     }
// };
// class derived:public Baseclass
// {
//     public:
//     void display()
//     {
//         cout<<"Displaying the derived function"<<endl;
//     }
// };
// int main()
// {
//   //create the obeject of the base class and the derived class
//   // pachi tare che ne pointer thi point kar ok 
//   Baseclass * ptr;
//   // object of baseclass
//   Baseclass b1;
//   derived d1;
//   //have mare che ne base class no pointer will point the derived clas object
//   ptr = &d1;
//   b1.display();
//   return 0;
    
// }
// // aa technically tare thavu joitu hatu pan thayu nathi ok 
// // base class ma jo tare virtual tu lagay to che ne derived class ma point karyu hoy to aenu j function run thahse ok tare base class nu run nahi thay ok 


#include <bits/stdc++.h>
using namespace std;
class CWH
{
    protected:
    string title;
    float rating;
    public:
    CWH(string s,float r)
    {
         title = s;
         rating = r;
        // ahiya tare che ne char ne alag rite access karyu che ok 
    }
    virtual void display()
    {
         // ahiya mare che ne base class che aene hu empty j rakhu chu ok 
    }
    // aam to mare aakhu samaj padi gayi che pan ek vaar code kari lau ok fata fat 
};
class CWHvideo:public CWH
{
    float videolength;
    public:
    //jyare tu aana method thi karish to tare hu hamna je rite lakhu chu ae rite karvu padshe ok 
    CWHVideo(string s ,float r,float vl): CWH(s,r){
           videolength = vl;
    }
    void display()
    {
        cout<<"The title is"<<title<<endl;
        cout<<"The rating of the video is"<<rating<<endl;
        cout<<"The videolength of the video is"<<videolength<<endl;
    }

   
};
class CWHtext:public CWH
{
    int words;
    public:
    //jyare tu aana method thi karish to tare hu hamna je rite lakhu chu ae rite karvu padshe ok 
    CWHtext(string s ,float r,int w): CWH(s , r){
           words = w;
    }
    void display()
    {
        cout<<"The title is"<<title<<endl;
        cout<<"The rating of the video is"<<rating<<endl;
        cout<<"The no of words of the video is"<<words<<endl;
    }

   
};

int main()
{
    //have badha ne initialze kar ok 
    string title;
    float rating;
    float vl;
    int words;
    title = "Nisarg";
   
    rating = 4.89;
     vl = 4.6;
    //have che ne hu values nakhu chu atle to mar ae j class call karvi padshe ok 
    CWHvideo video(title,rating,vl);
    title = "Keli";
    rating = 3.4;
    words= 800;
    CWHtext text(title,rating,words);
    //have che ne base class ne point kar ok 
    CWH* tuts[2];
    //ahiya mei array lai lidhi or hu shu kau chu tu alag alag pointer pan lai shake che ok 
    // like CWH * first = video and CWH * second = text;
    tuts[0] = &video;
    tuts[1] = &text;
    // ahiya tu che ne first = video and second = text kari shake che ane pachi display call kar ok 

    //have kahli tu che ne display functin call kar ok please

     tuts[0]->display();
     tuts[1]->display();
     return 0;

}