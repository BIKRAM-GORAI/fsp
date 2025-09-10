#include<iostream>
using namespace std;
class Student
{
    public:
        int roll;
        string name;
        void display()
        {
            cout<<"NAME1:" <<name<<"    ROLL NO  "<<roll<<endl;

        }
};


int main()
{
    Student s1;     //stored in stack so no pointer required
    s1.name="amit";
    s1.roll=123;
    s1.display();

    Student *s2=new Student;   //stored in heap so pointer required
    s2->name="gaurav";
    s2->roll=567;
    s2->display();





    return 0;
}