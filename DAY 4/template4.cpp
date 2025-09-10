#include <iostream>
using namespace std;

template <class T1,class T2>

class Student
{
    private:
        T1 name;
        T2 roll;
    public:
        Student(T1 n,T2 r):name(n),roll(r){}

        void display()
        {
            cout<<"NAME:  "<<name<<"  ROLL:  "<<roll;
        }

};

int main()
{
    Student<string ,int >s1("AMIT",34);
    s1.display();
    return 0;
}