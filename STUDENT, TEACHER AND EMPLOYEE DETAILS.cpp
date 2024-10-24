#include <iostream>
using namespace std;
const int size = 25;
class person
{
    char name[size];
    long int contact_no;
    char address[size];
public:
    void read()
    {
        cout<<"\n Name=";
        cin>>name;
        cout<<"\n Contact Number=";
        cin>>contact_no;
        cout<<"\n Address=";
        cin>>address;
        }
        void write()
        {
            cout<<"\n Name="<<name;
            cout<<"\n Number="<<contact_no;
            cout<<"\n Address="<<address;
        }
};
class student:public person
{
    long int roll_no;
public:
    void read()
    {
        person::read();
        cout<<endl<<"\n Enter Student Details="<<endl;
        cout<<"Roll no:\n";
        cin>>roll_no;
    }
    void write()
    {
        cout<<"\n Student Information="<<endl;
        person::write();
        cout<<"\n Roll no:"<<roll_no;
    }
};
class teachingstaffs:public person
{
    char depart[size];
    char design[size];
public:
    void read()
    {
        person::read();
        cout<<"\n Enter Department=";
        cin>>depart;
        cout<<"\n Enter designation=";
        cin>>design;
    }
    void write()
    {
        person::write();
        cout<<"\n Department="<<depart<<endl;
        cout<<"\n designation="<<design;
    }
};
class nonteachingstaffs:public person
{
    char post[size];
public:
    void read()
    {
        person::read();
        cout<<"\n Enter Post=";
        cin>>post;
    }
    void write()
    {
        person::write();
        cout<<"\n Post="<<post<<endl;
    }
};
int main()
{
    student s1;
    s1.read();
    s1.write();
    teachingstaffs t1;
    cout<<"\n Enter Teaching Staffs Details=\n";
    t1.read();
    cout<<"\n Teaching staffs Information="<<endl;
    t1.write();
    nonteachingstaffs n1;
    cout<<"\n Enter Non-Teaching Staffs details=\n";
    n1.read();
    cout<<"\n Non-Teaching Staffs Information="<<endl;
    n1.write();
    return 0;
}

