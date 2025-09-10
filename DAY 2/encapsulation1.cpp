#include<iostream>
using namespace std;

class Department
{
    private:
        string deptName;
        string course;
        int deptId;

    public:
        string getDeptName()
        {
            return this->deptName;
        }
        void setDeptName(string deptName)
        {
            this->deptName=deptName;

        }
        string getCourse()
        {
            return this->course;
        }
        
        string setCourse(string course)
        {
            this->course=course;
        }
        int getDeptId()
        {
            return this->deptId;
        }
        void setDeptId(int deptId)
        {
            this->deptId=deptId;
        }
};

int main()
{
    Department d1;
    d1.setCourse("C++");
    d1.setDeptId(101);
    d1.setDeptName("CSE");


    cout<<"course= "<<d1.getCourse()<<endl;
    cout<<"department name= "<<d1.getDeptName()<<endl;
    cout<<"department id= "<<d1.getDeptId()<<endl;
    return 0;
    
}