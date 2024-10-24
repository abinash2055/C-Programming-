#include <iostream>
#include <math.h>
using namespace std;
int power(double n=2)
{
    return n;
}
int main()
{
    double i;
    double pow1;
    cout<<"enter number";
    cin>>i;
    cout<<"power number";
    cin>>pow1;
    cout<<"square value is:"<<pow(1,power(pow1))<<endl;
    cout<<"square by default"<<pow(1,power());
    return 0;

}

