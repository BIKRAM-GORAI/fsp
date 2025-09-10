

//one parent have multiple child

#include <iostream>
using namespace std;

class Parent1
{
    public:
        void show()
        {
            cout<<"we are in parent 1"<<endl;
        }
};

class Child1:public Parent1
{
    public:
        void display()
        {
            cout<<"we are in child1"<<endl;
        } 
};
class Child2:public Parent1
{
    public:
        void display()
        {
            cout<<"we are in child2"<<endl;
        } 
};

int main()
{
    Child1 obj1;
    obj1.show();
    obj1.display();

    Child2 obj2;
    obj2.display();
    obj2.show();

    return 0;
}