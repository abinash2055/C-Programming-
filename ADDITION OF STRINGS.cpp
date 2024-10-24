#include<iostream>
#include<string.h>
using namespace std;
const int SIZE=50;
class string1{
char str[SIZE];
public:
string1(){
strcpy (str," ");
}
string1(char *mystr){
strcpy (str,mystr);
}
void output(){
cout<<str;
}
string1 operator+(string1 s)
{
string1 temp(str);
strcat (temp.str , s.str);
return temp;
}
};
int main()
{
string1 str1 = (char*)"Welcome to ";//constructor 2
string1 str2 = (char*)"Operator Overloading Class ";//constructor 2
string1 str3;
cout<<"\n Before string3 = string1 + string2";
cout<<"\n String1=";
str1.output();
cout<<"\n String2=";
str2.output();
cout<<"\n String3=";
str3.output();
str3=str1+str2;
cout<<"\n After Concatination string3 = string1 + string2"<<endl;
cout<<"\n String1=";
str1.output();
cout<<"\n String2=";
str2.output();
cout<<"\n String3=";
str3.output();
return 0;
}

string1 str2 =
( Operator Overloading Class ";";//constructor 2

