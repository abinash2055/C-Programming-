#include <iostream>
using namespace std;
class criketer
{
protected:
    char name[40];
    int age;
    int no_of_match;
public:
    void getinfo()
    {
        cout<<"Your Name:";
        cin>>name;
        cout<<"\n Your Age:";
        cin>>age;
        cout<<"\n Enter total number of match played:";
        cin>>no_of_match;
    }
    void showinfo()
    {
        cout<<"\n Name:"<<name;
        cout<<"\n Age:"<<age;
        cout<<"\n Matched played:"<<no_of_match;
    }
};
class bowler:public criketer
{
protected:
    int no_of_wickets;
public:
    void getinfo()
    {
        criketer::getinfo();
        cout<<"\n How many wickets taken till now:";
        cin>>no_of_wickets;
    }
    void showinfo()
    {
        criketer::showinfo();
        cout<<"\n Number of wickets:"<<no_of_wickets;
    }
};
class batsman:public criketer
{
protected:
    int no_of_runs;
    int no_of_centuries;
public:
    void getinfo()
    {
        criketer::getinfo();
        cout<<"\n How many number of runs till now:";
        cin>>no_of_runs;
        cout<<"\n How many number of centuries:";
        cin>>no_of_centuries;
    }
    void showinfo()
    {
        criketer::showinfo();
        cout<<"\n Number of runs:"<<no_of_runs;
        cout<<"\n Number of centuries:"<<no_of_centuries;
    }
};
int main()
{
    bowler bow1;
    batsman bat1;
    cout<<"\n Enter Bowler information:"<<endl;
    bow1.getinfo();
    cout<<"\n Details of Bowler:"<<endl;
    bow1.showinfo();
    cout<<"\n Enter Batsman information:"<<endl;
    bat1.getinfo();
    cout<<"\n Details of Batsman:"<<endl;
    bat1.showinfo();
    return 0;
}
