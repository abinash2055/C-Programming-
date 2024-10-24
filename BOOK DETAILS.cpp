/*3.	Define a class publication which has a title. Derive two classes from it a class book which has an accession number and a class magazine which has
 volume number. With these two as bases, derived the class journal. Define a function print() in each of these classes. Ensure that the derive class
 function always invokes the base(s) class function. In main create a jounal called IEEEOOP with an accession number 681.3 and a volume number 1.
 Invoke the print() function for this object.*/
#include<iostream>
#include<string.h>
using namespace std;
class publication
{	protected:
	char title[20];
	public:
		void print()
		{cout<<"Title:"<<title<<endl;
		}
};
class book:public virtual publication
{	protected:
		float access_number;
	public:
		void print()
		{cout<<"Access number:"<<access_number<<endl;
		}
};
class magazine:public virtual publication
{	protected:
		int volume_number;
	public:
		void print()
		{cout<<"Volume Number:"<<volume_number<<endl;
		}
};
class journal:public book,public magazine
{	public:
		journal(char *jour,float x,int y)
		{	strcpy(title,jour);
			access_number=x;
			volume_number=y;
		}
		void print()
		{     publication::print();
		      book::print();
		      magazine::print();
		}
};
int main()
{
	journal IEEEOOP((char*)"Cprogramming",681.3,1);
	IEEEOOP.print();
return 0;
}
