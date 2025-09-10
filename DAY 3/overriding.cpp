#include<iostream>
using namespace std;

class OverridingDemo
{
    public:
        virtual void display() //virtual function required for overriding
        {
            cout<<"we are in parent class";

        }

};

class Demo:  public OverridingDemo  //child class inheriting base(parent) class
{
    public:
        void display() override  //overiding display method of parent class
        {
            cout<<"we are in child class";
        }
};

int main()
{
    OverridingDemo *obj;//base class pointer
    obj->display();//we are in parent class                                                      
    
    Demo d1;//child class object
    obj=&d1;//base class pointer pointing to child class object
    obj->display();//we are in child class
    return 0;

}