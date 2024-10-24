#include <iostream>

using namespace std;
    int i=3;
    class a{
public:
    ~a()
    {
    i=10;
    }
};
int fxn(){
i=3;
a ob;
return i;
}
int main()
{
    cout<<"i="<<fxn()<<endl;
    return 0;
}

