#include<iostream>
using namespace std;
int count=0;
class example
{
public:
    example()
    {
        count++;
        cout<<"number of object created "<<count<<endl;
    }
    ~example()
    {
        cout<<"the number of object destroyed "<<count<<endl;
        count--;
    }
};
int main()
{
   {
    cout<<"object created in main:"<<endl;
    example e1,e2,e3,e4;
    {
        cout<<"object created in block 2"<<endl;
        example e6;
    }
   }
   cout<<"return in main()"<<endl;
   return 0;
}
