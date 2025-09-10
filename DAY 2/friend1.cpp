#include <iostream>
using namespace std;

class FSP
{
    private:
        string course;
        int courseId;


        friend void display(FSP f1);  //the friend function carries the data of the private variables outside 

};

void display(FSP f1)
{
    f1.course="C++";
    f1.courseId=345;
    cout<<"course name:"<<f1.course<<"  course id :"<<f1.courseId<<endl;
}

int main()
{
    FSP obj1;
    display(obj1);
    return 0;
}
