#include<iostream>
using namespace std;
class test{
int a;
public:
    test(int x){
    a=x;
    }
    void output()
    {
        cout<<"the value of a is="<<a;
    }
};
int main()
{
    test ob(0);
    int value;
    cout<<"enter the value=";
    cin>>value;
    ob=value;
    ob.output();
    return 0;
}
