#include <iostream>
using namespace std;
class Student
{
public:
    virtual void show();
};
class Engineering:public Student
{
public:
    void show()
    {
        cout<<"\n I am Engineer";
    }
};
class Science:public Student
{
    public:
    void show()
    {
        cout<<"\n I am Scientist";

    }
};
class Medical:public Student
{
public:
    void show()
    {
        cout<<"\n I am Doctor";
    }
};
int main()
{
    Engineering e1;
    Science s2;
    Medical m1;
    Student *sptr;
    sptr=&e1;
    sptr->show();
    sptr=&s2;
    sptr->show();
    sptr=&m1;
    sptr->show();
    return 0;
}
