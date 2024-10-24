#include<iostream>
using namespace std;
class dbc{
int x,y,z;
public:
    dbc(){
    cout<<"x=";
    cin>>x;
    cout<<"y=";
    cin>>y;
    }
    operator int ()
    void show()
};
operator int ()
{
    z=x*y;
    return 0;
}
void dbc::show()
{
    cout<<"z="<<z;
}
int main()
{
    dbc obj;
    int m;
    m=obj;
    ob.show();
    return 0;
}
