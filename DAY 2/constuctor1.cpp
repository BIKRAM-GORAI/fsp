//constuctor is special type of function that has the same name as the class
//it is activated when we declare the object of the class


#include<iostream>
using namespace std;

class Employee
{
    public:
        int roll;
        string name;

        Employee()
        {
            roll=123;
            name="amit";
        }
        void display()
        {
            cout<<name<<" "<<roll;
        }

};
int main()
{
    Employee e1;
    e1.display();


    return 0;
}