#include<iostream>
#include<string.h>
using namespace std;
class City
{
    char CityName[20];
    float DistFromKtm;
public:
    void setCity(char *cn,float dfk)
    {
        strcpy(CityName,cn);
        DistFromKtm=dfk;
    }
    float operator-(City c1)
    {
        return(this->DistFromKtm-c1.DistFromKtm);
    }
    float operator+(City c1)
    {
        return(this->DistFromKtm+c1.DistFromKtm);
    }
    void display()
    {
        cout<<"CityName:"<<CityName<<endl;
        cout<<"Distance from Kathmandu:"<<DistFromKtm<<endl;
    }

};
int main()
{
    City Pokhara,Dhangadi;
    Pokhara.setCity((char*)"Pokhara",206);
    Dhangadi.setCity((char*)"Dhangadi",671);
    Pokhara.display();
    cout<<endl;
    Dhangadi.display();
    cout<<endl;
cout<<"Sum of Distance of Kathmandu of Pokhara and Dhangadi is:"
       <<Dhangadi+Pokhara<<endl;
    cout<<"Distance between Pokhara and Dhangadi is:"<<Dhangadi-Pokhara;
    return 0;
}

