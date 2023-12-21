#include <bits/stdc++.h>
using namespace std;
class hero
{
    // properties
    // ahiya tare private j che ok class ni andar j use kari shakashe
private:
    int health;

public:
    char * name ;
    char level;
    hero()
    {
        cout << "Nisarg and Keli" << endl;
        name = new name[100];
    }
    hero(int health)
    {
        this->health = health; // this walu ramesh ni health che ame normal health nakhvani che ok
    }
    void print()
    {
        cout << "Health" << this->health << endl;
        cout << "Level" << this->level << endl;
    }
    char level;
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health = h;
    }
    void gethealth(char ch)
    {
        level = ch;
    }
};
int main()
{
    hero ramesh(70, C); // parameterized constructor
    ramesh.print();
    // copy constructor
    hero s(ramesh);
    s.print();
    // // static allocation
    // hero a; // ahiya ek hero type no object banayo che ok
    // a.sethealth(70);
    // // a.setlevel('B'); // set level atle nahi thay logically as ae to public che ne atle
    // cout<<"Level is"<<a.level<<endl;
    // cout<<"Health is"<<a.gethealth()<<endl;
    // // dynamic allocation
    // hero * b = new hero;
    // // dereferncing operator use kar ok tu
    // b->sethealth(80);
    // // b->setlevel('A');
    // cout<<"Level is"<<(*b).level<<endl;
    // cout<<"Health is"<<(*b).gethealth()<<endl; // or -> bhi chale che ok
    // // cout<<"size "<<sizeof (h1)<<"\n";
    // // cout<<"Size of Ramesh"<<sizeof(ramesh)<<endl;
    // // cout<<"Ramesh health is"<<ramesh.gethealth()<<endl;
    // // ramesh.sethealth(70);
    // // ramesh.level = 'A';
    // // cout<<"The health is "<<ramesh.gethealth()<<endl;
    // // cout<<"Level "<<ramesh.level<<endl;
}

