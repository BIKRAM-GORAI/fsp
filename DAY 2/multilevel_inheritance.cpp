#include<iostream>
using namespace std;

class Animal
{
    public:
        void walk()
        {
            cout<<"animal can walk"<<endl;
        }
};

class Mammals:public Animal //inheriting the properties of Animal class
{
    public:
        void eat()
        {
            cout<<"mammals can eat"<<endl;

        }
};

class Humans:public Mammals    //inheriting the properties of Mammals class
{
    public:
        void study()
        {
            cout<<"humans can study"<<endl;
        }
};

class Person:public Humans  //inheriting the properties of Humans class
{
    public:
        void work()
        {
            cout<<"person can work"<<endl;
        }
};

int main()
{
    Person p1;
    p1.work();
    p1.eat();
    p1.study();
    p1.walk();
    return 0;

}