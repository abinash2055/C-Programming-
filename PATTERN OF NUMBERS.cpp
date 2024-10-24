#include<iomanip>
#include<iostream>
using namespace std;
int main()
{
int e,c,width=10,star=0;
for(e=1; e<=6; e++)
{
cout<<setw(width);
for(c=0; c<=star; c++)
{
cout<<"*";
}
cout<<endl;
width--;
star+=2;
}
system("pause");
return 0;
}
