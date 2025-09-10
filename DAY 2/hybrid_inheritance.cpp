//when we use single inheritance and multilevel inheritance then it is called hybrid inheritance


//diamond problem -- when a function is called into a another  function repeatedly then problem occours so we use virtual base class.

#include <iostream>
using namespace std;

class Base_A
{
    public:
    void display()
    {
        cout<<"we are in Base class A"<<endl;
    }
};


class Child_1:virtual public Base_A
{
    public:
    void show()
    {
        cout<<"we are in child class 1"<<endl;
    }
};


class Child_2:virtual public Base_A
{
    public:
        void result()
        {
            cout<<"we are in child class 2"<<endl;
        }
};

class Child_3:public Child_1,public Child_2
{
    public:
        void findData()
        {
            cout<<"we are in child 3"<<endl;
        }
};

int main()
{
    Child_3 obj1;
    obj1.display();
    obj1.findData();
    obj1.result();
    obj1.show();
    return 0;
}
