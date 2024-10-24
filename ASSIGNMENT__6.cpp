#include <iostream>
using namespace std;
class Animal
{
public:
    void eat()
    {
        cout<<"You can eat\n";
    }
    void sleep()
    {
        cout<<"You can sleep\n";
    }
};
    class Dog:public Animal
    {
    public:
        void bark()

        {
            cout<<"Dog can bark \n";
        }
        void Name()
        {
            cout<<"They are dogs\n";
        }
    };
    class Cat:public Animal
    {
    public:
        void moew()
        {
            cout<<"Cat can meow\n";
        }
        void Name()
        {
            cout<<"You are a cat";
        }
    };
int main()
{
    Dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();
    d1.Name();
    cout << "\n";
    Cat e1;
    e1.eat();
    e1.sleep();
    e1.moew();
    e1.Name();
    return 0;
}
