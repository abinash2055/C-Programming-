#include <iostream>
using namespace std;
class person
{
protected:
    char name[20];
    int age;
public:
    void get()
    {
        cout<<"Enter the name of Employee:";
        cin>>name;
        cout<<"Enter age of employee";
        cin>>age;
    }
};
class employee:public person
{
private:
    int salary;
public:
void get()
{
    person::get();
    cout<<"Enter the salary of employee";
    cin>>salary;
}
void display()
{
    cout<<"\nName is : "<<name;
    cout<<"\nAge is : "<<age;
    cout<<"\nSalary is : "<<salary;

}
};
int main ()
{
    employee e1;
    e1.get();
    e1.display();
    return 0;
}
