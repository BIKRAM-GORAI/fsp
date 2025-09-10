#include<iostream>
using namespace std;

class student
{
    virtual void name()
    {
        cout<<"the student name is rahul"<<endl;

    }
};

class newname: public student
{
    public:
        void name() override
        {
            cout<<"the student name has changed from rahul to rohit "<<endl;
        }

};

int main()
{
    newname obj;
    obj.name();
    return 0;
}