//destructor is only called when the object is deleted
//so when declared normally ,the object is stored in stack so it gets deleted after the use so the destructor is not called.
//but when using pointer object the obejct stays in memory forever until deleted manually so the destructor is not vall but 
//when deleted manually the constuctor gets called





#include<iostream>
using namespace std;

class Training
{
    public:
        int roll;
        string name;
        Training(int r,string n)
        {
            roll=r;
            name=n;
        }
        void display()
        {
            cout<<"name:"<<name<<"  roll:"<<roll;
        }
        ~Training()  //declaring destructor
        {
            cout<<"Destructor called";
        }
};
int main()
{
    // Training t1(345,"amit");
    // t1.display();
    Training  *t1=new Training(345,"amit");
    t1->display();
    delete t1;
    return 0;
}