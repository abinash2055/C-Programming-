//WAP to calculate avg. of diff. no. entered by user using concept of memory allocation
#include<iostream>
using namespace std;



int main()
{
            int *arr,n,total=0;
            cout<<"How many numbers?"<<endl;
            cin>>n;
            arr=new int[n];
            cout<<"Enter elements :\n";
            for(int i=0;i<n;i++)
                cin>>arr[i];
            for(int i=0;i<n;i++)
                total=total+arr[i];
            int average=float(total)/n;



            cout<<"Total="<<total<<endl;
            cout<<"Average="<<average;



            delete []arr;
            return 0;
            }
