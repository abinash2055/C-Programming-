#include<iostream>
using namespace std;
class Distance{
    private:
        int feet;
    public:
        Distance()   {feet=0;}

        Distance operator++(int) {
            Distance temp;
            temp.feet=feet++;
            return temp;
        }
        //void operator++()  {count++;}
        void display()
        {
            cout<<feet<<"feet";
        }
};

int main(){
     Distance dist1,dist2;
     cout<<"\nDistance 1=";
     dist1.display();
     cout<<"\nDistance 2=";
     dist2.display();
     dist2=dist1++;
     cout<<"\nDistance 1=";
     dist1.display();
     cout<<"\nDistance 2=";
     dist2.display();
	return 0;
}
