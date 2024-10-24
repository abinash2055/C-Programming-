#include<iostream>
using namespace std;
class liquid{
   float specific_gravity;
public:
 void input( ){
     cout<<"Specific Gravity:";
     cin>>specific_gravity;
 }
 void output( ){
    cout<<"Specific gravity:"<<specific_gravity<<endl;
 }
};
class fuel{
    float rate;
public:
 void input( ){
    cout<<"Rate(per liter):Rs.";
    cin>>rate;
 }


void output( ){
   cout<<"Rate(per liter):Rs."<<rate<<endl;
    }
};
class petrol : public liquid, public fuel{
public:
    void input( ){
        liquid::input( );
        fuel::input( );
    }
    void output( )
    {
        liquid::output( );
        fuel::output( );
    }
};


int main(){
  petrol p;
  cout<<"Enter data"<<endl;
  p.input();
 // p.liquid::input();
 // p.fuel::input();
  cout<<"\nDisplaying data\n";
  p.output();
  //p.liquid::output();
  //p.fuel::output();
return 0;
}
