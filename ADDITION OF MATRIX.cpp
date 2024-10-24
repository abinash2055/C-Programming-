#include<iostream>
using namespace std;
class matrix{
    int a[3][3];
public:
    matrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                a[i][j]=0;
            }
        }
    }
    void getMatrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<"\nEnter"<<i<<","<<j<<" element=";
                cin>>a[i][j];
            }
        }

    }
    void showMatrix()
    {
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                cout<<a[i][j]<<",";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    matrix operator+(matrix x)  //overloading + operator for addition
    {
        matrix sum;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                sum.a[i][j]=a[i][j]+x.a[i][j];
            }
        }
        return sum;
    }
};

int main(){
    matrix a,b,result;
    a.getMatrix();
    b.getMatrix();
    result=a+b;

    a.showMatrix();
    b.showMatrix();
    result.showMatrix();
	return 0;
}
