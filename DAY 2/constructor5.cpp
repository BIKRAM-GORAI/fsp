
// inheritance



#include<iostream>
using namespace std;
class Courses
{
    protected:
        int courseId;
        string courseName;
    private:
        string courseDescription="C++ FSP COURSE";
    public:
        void display()
        {
            cout<<"COURSE NAME:"<<courseName<<"   COURSE ID:"<<courseId;
        }
};

class Students:public Courses //here Students is child class ,Courses class is parent class ,public is mandatory to write as it is the format
{
    public:
        void study()
        {
            courseId=1234;           //the variable courseId and courseName is available in Students class because it is inherited from Course 
            //and also protected alows the variable access in inheritance class
            courseName="java programming";
            cout<<"student study courses:"<<courseName<<"having ID:"<<courseId<<endl;
        }

};

int main()
{
    Students s1;
    // s1.courseId=3456;  //it will give error because the a1 object cannot access the main course class
    // s1.courseName="fsp";
    s1.study();
    s1.display();
    
    return 0;
}