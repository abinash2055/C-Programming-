/*8.	In the program with the class time.
a.	Create two initialized time objects (using parameterized constructor).
b.	Create a pointer to time object.
c.	Make the pointer point to a new time object (using default constructor).
d.	Call the function add (time, time) to store the sum in pointer to object.
e.	Call function display( ) using pointer to object and delete the pointer to object.*/
#include<iostream>
using namespace std;
class time
{
    int hrs,mins,sec;
public:
    time(int x=0,int y=0,int z=0)
    {
        hrs=x;
        mins=y;
        sec=z;
    }
    void displayTime();
    time addTime(time t1,time t2);
};
time time::addTime(time t1,time t2)
{
    sec=t1.sec+t2.sec;
    if(sec>=60)
    {
        mins=t1.mins+t2.mins+(sec/60);
        sec=sec%60;
    }

    if(mins>=60)
    {
        hrs=t1.hrs+t2.hrs+(mins/60);
        mins=mins%60;
    }
    return time(hrs,mins,sec);
}
void time::displayTime()
{
    cout<<hrs<<":"<<mins<<":"<<sec;
}
int main()
{
    int x,y,z,a,b,c;
    cout<<"Enter the time T1\n";
    cin>>x>>y>>z;
    cout<<"Enter the time T2\n";
    cin>>a>>b>>c;
    time t1(x,y,z);
    time t2(a,b,c);

    time *t;
    time tobj;
    t=&tobj;
    t=new time;

    t->addTime(t1,t2);
    t->displayTime();
    delete t;
    return 0;
}
