//wap to create class name database for the storage of personal information
#include<iostream>
#include<string.h>
using namespace std;
class  database
{
private:           // private section
    char name[40];   //data member
    char address{30};
    int mobile;

public:            //public section
   /* void setdata(char *n,char *a, int m)
    {
        strycpy(name,n);
        strycpy(address,a);
        mobile = m;
    } */
    void getdata ()
    {
    cout<<"enter name:";
    cin>>name;
    cout<<"enter addtress:";
    cin>>address;
    cout<<"enter mobile no.:";
    cin>>mobile;
    }
    void display()
    {
        cout<<"name"<<name<<endl;
        cout<<"address"<<address<<endl;
        cout<<"mobile number"<<mobile<<endl;
    }
};
int main()
{
    database d1,d2;
    d2.getdata();
    d2.display();
    return 0;
}
