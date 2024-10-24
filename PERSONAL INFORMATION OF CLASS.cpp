//wap to create class name database for the storage of personal information
#include<iostream>
#include<string.h>
using namespace std;
class student
{          // private section
    char name[40];   //data member
    int roll;
    float marks[3];
    float sum,avg;

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
    cout<<"roll number:";
    cin>>roll;
    cout<<"marks of 3 subject:";
    for(int i=0;i<3;i++)
    cin>>marks[i];
    }
    void display()
    {
        cout<<"name"<<name<<endl;
        cout<<"roll no.:"<<roll<<endl;
        cout<<"obtained marks"<<endl;
        for(int i=0;i<3;i++)
        {
            cout<<marks[i];
            sum+=marks[i];
        }
        cout<<"avg marks" <<sum/3;
    }
};
int main()
{
    student std1,std2;
    cout<<"informations are :"<<endl;
    std1.getdata();
    std2.getdata();
    std1.display();
    std2.display();
    return 0;
}
