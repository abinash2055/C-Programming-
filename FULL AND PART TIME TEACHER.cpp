#include <iostream>
using namespace std;
class lecturer
{
protected:
    int id;
    string name;
public:
    void readdata()
    {
        cout<<"\n Your ID=";
        cin>>id;
        cout<<"\n Your Name=";
        cin>>name;
    }
    void printdata()
    {
        cout<<"\n ID="<<id;
        cout<<"\n Your Name="<<name;
    }
};
class fulltime:public lecturer
{
protected:
    float paypermonth;
public:
    void readdata()
    {
        lecturer::readdata();
        cout<<"\n Your PayPerMonth=";
        cin>>paypermonth;
    }
    void printdata()
    {
        lecturer::printdata();
        cout<<"\n PayPerMonth= Rs."<<paypermonth;
    }
};
class parttime:public lecturer
{
protected:
    float payperhour;
public:
    void readdata()
    {
        lecturer::readdata();
        cout<<"\n Enter PayPerHour=";
        cin>>payperhour;
    }
    void printdata()
    {
        lecturer::printdata();
        cout<<"\n PayPerHour= Rs."<<payperhour;
    }
};
int main()
{
    parttime p1;
    fulltime f1;
    cout<<"\n Enter Parttime information=";
    p1.readdata();
    cout<<"\n Details of Part time='";
    p1.printdata();
    cout<<"\n Enter Fulltime information=";
    f1.readdata();
    cout<<"\n Details of Full time='";
    f1.printdata();
    return 0;
}
