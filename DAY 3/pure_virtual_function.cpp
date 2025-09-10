#include<iostream>
using namespace std;

class Competition
{
    public:
        virtual void drawing()=0;
        virtual void writing()=0;
};

class InheritDemo: public Competition
{
    void drawing() override
    {
        cout<<"we are drawing"<<endl;
    }
    void writing() override
    {
        cout<<"we are writing"<<endl;
    }
};
class FinalResult:public Competition
{
    void drawing() override
    {
        cout<<"drawing competition going to end"<<endl;
    }
    void writing() override
    {
        cout<<"writing competition going to end"<<endl;
    }
};

int main()
{
    Competition* c1;
    InheritDemo obj1;
    FinalResult obj2;

    c1=&obj1;
    c1->drawing();
    c1->writing();

    c1=&obj2;
    c1->drawing();
    c1->writing();
    return 0;


}
