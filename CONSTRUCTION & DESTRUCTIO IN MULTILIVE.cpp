#include <iostream>
using namespace std;
class Book
{
    protected:
        int number;
        double price;
    public:
        Book(int a, double b)
        {
            number=a;
            price=b;
        }
        ~Book()
        {
            cout<<"\n Base class Destructor \n";
        }
};
class SubClass:public Book
{
    protected:
        int pages;
    public:
        SubClass(int p,double q, int r):Book(p,q)
        {
            pages=r;
        }
        ~SubClass()
        {
            cout<<"\SubClass Destructor \n";
        }
};
class SubSubClass:public SubClass
{
    protected:
        double discount;
    public:
        SubSubClass(int c, double d, int e, double f):SubClass(c,d,e)
        {
            discount=f;
        }
        ~SubSubClass()
        {
            cout<<"\n SubSubClass Destructor \n";
        }
        void display()
            {
                cout<<"\n Number= "<<number;
                cout<<"\n Price= "<<pages;
                cout<<"\n Discount= "<<discount;
            }
};
int main()
{
    SubSubClass objD(1,240.0,405,0.3);
    objD.display();
    return 0;
}
