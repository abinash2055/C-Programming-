//wap overloaded function for computing area of triangle , circle , rectangle

//wap power () to raise number m to power n. the func. takes


#include<iostream.h>
using namespace std;
int area (int b, int h)
{
    return (0.5*b*h);
}
float area (int r)
{
    return (3.14*r*r);
}
float area(float l,float b)
{
    return (l*b);
}
int main()
{
    int b,h,r;
    float l,br;
    cout<<"enter b and h";
    cin>>b>>h;
    cout<<"triangle:"<<area(b,h)<<endl;
    cout<<"r is:";
    cin>>r;
    cout<<"area of circle"<<area(r)<<endl;
    cout<<"l and b ";
    cin>>l>>br;
    cout<<"area of rectangle "<<area(l,br);
}
