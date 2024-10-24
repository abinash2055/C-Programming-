#include <iostream>
using namespace std;
class name
{
char str[15];
int age;
public:
    void input()
    {
    cout<<"\n enter name:";
    cin>>str;
    cout<<"\n enter age:";
    cin>>age;
    }
    void show()
    {
    cout<<"\n\n the elder person:";
    cout<<"\n name:"<<str;
    cout<<"\n age is:"<<age;
    }
    name display(name x)
    {
        cout<<"\n content of object n1(this pointer)";
        cout<<"\n name:"<<this->str;
        cout<<"\n age:"<<this->age;
        cout<<"\n\n content of object n2(this pointer)";
        cout<<"\n name:"<<x.str;
        cout<<"\n age:"<<x.age;
        if (this->age>x.age)
            return *this;
        else
            return x;
    }
};
