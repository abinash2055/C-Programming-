//WAP to return a refrence in which smallest of 3 variables is replaced by number 100
#include <iostream>
#include<iomanip>
using namespace std;
int &small(int&,int&,int&);
int main()
{
    int a,b,c;
    cout<<"enter 3 numbers:";
    cin>>a>>b>>c;
    small(a,b,c)=100;
    cout<<"X="<<a<<setw(10)<<"Y="<<b<<setw(10)<<"Z="<<c;
    return 0;
}
    int &small (int &x, int &y, int &z)
    {
        if ((x<y)&&(x<z))
            return x;
        else if ((y<x)&&(y<z))
                return y;
        else
            return z;

    }


