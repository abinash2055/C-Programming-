#include <iostream>
using namespace std;
class distance{
int feet, inches;
private:
    void getdist(){
    cout<<"enter feet=";
    cin>>feet;
    cout<<"enter inches=";
    cin>>inches;
    }
    void showdist(){
    cout<<"after addition ="<<feet<<"feets and"<<inches<<"inches";
    }
    distance add_dist(distance,distance);
};
     distance::add_dist(distance d1,distance d2)
    {
        distance temp;
        temp.feet=0;
        temp.inches=d1.inches+d2.inches;
        if(temp.inches>=12)
        {
            int rem=temp.inches/12;
            temp.inches=temp.inches%12;
            temp.feet=temp.feet+rem;
        }
        temp.feet+=d2.feet+d1.feet;
        return temp;
    }
    int main()
    {
        distance d3,d4,d5,d6;
        d3.getdist();
        d4.getdist():
        d6=d5.add_dist(d3,d4);
        d6.showdist();
        return 0;
    }
