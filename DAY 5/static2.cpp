#include <iostream>
using namespace std;


class Student{
    private:
        string name;
        static int count;

    public:
        Student(string n)
        {
            name=n;
        }
        void display()
        {
            cout<<"Name="<<name<<endl;
        }
        static void counter ()
        {
            cout<<count;
       
        }
};

int Student::count=15;
int main()
{
    Student s1("Amit");
    s1.display();

    Student::counter();
    return 0;
}