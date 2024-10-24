/*Write a class description for a complex number, which is a combination of two parts real and imaginary of integral type. Write methods for addition, subtraction, multiplication and division of the complex number. Implement it in your own program.
Addition of two complex numbers:	(a+ib)+(c+id)	= a+c+ib+id =a+c+i(b+d)
Subtraction of two complex numbers:  	(a+ib)-(c+id)	= a-c+ib-id =a-c+i(b-d)
Multiplication of two complex numbers: (a+ib)*(c+id)	= ac+aid+ibc-bd=ac-bd+i(ad+bc)
Division of two complex numbers:  	(a+ib)/(c+id)	= (a+ib)/(c+id) *(c-id)/ (c-id)
                                                    = ac-aid+ibc+bd/c2+d2
                                                    = ac+bd+i(bc-ad)/ c2+d2
                                                    = ac+bd/ c2+d2+ i(bc-ad)/ c2+d2 */
#include<iostream>
using namespace std;
class complex
{
        int real, imag;
    public:
        complex()
        {
            real=0;
            imag=0;
        }
        complex(int r, int i)
        {
            real=r;
            imag=i;
        }
        void addComplex(complex,complex);
        complex subtractComplex(complex);
        complex multiComplex(complex);
        complex divideComplex(complex);
        void display()
        {
            cout<<"("<<real<<"+i"<<imag<<")"<<endl;
        }
};
void complex::addComplex(complex c1,complex c2)
{
    real=c1.real+c2.real;
    imag=c1.imag+c2.imag;

}
complex complex::subtractComplex(complex c1)
{
    this->real=real-c1.real;
    this->imag=imag-c1.imag;
    return *this;
}
complex complex::multiComplex(complex c1)    //a=real b=image c=c1.real
{ complex temp;                                        //d=c1.imag
    temp.real=(real*c1.real-imag*c1.imag);
    temp.imag=(real*c1.imag+imag*c1.real);
    return temp;
}
complex complex::divideComplex(complex c1)
{
    this->real=(real*c1.real+imag*c1.imag)/(c1.real*c1.real+c1.imag*c1.imag);
    this->imag=(imag*c1.real-real*c1.imag)/(c1.real*c1.real+c1.imag*c1.imag);
    return *this;
}
int main()
{
    complex c1(2,3),c2(4,5),c3;
    cout<<"Addition of Complex number:"<<endl;
    c3.addComplex(c1,c2);
    c3.display();
    cout<<"Subtraction of Complex number:"<<endl;
    c3=c1.subtractComplex(c2);
    c3.display();
    cout<<"Multiplication of Complex number:"<<endl;
    c3=c1.multiComplex(c2);
    c3.display();
    cout<<"Division of Complex number:"<<endl;
    c3=c1.divideComplex(c2);
    c3.display();
    return 0;
}
