#include <iostream>
using namespace std;

class SingleInheritance
{
    public:
        int result(int a ,int b)
        {
            return a+b;
        }
};

class Demo:public SingleInheritance    //inheriting from SingleInheritance so making a object of Demo we can access the result in the parent SingleInheritance
{
    public:
        void show()
        {
            cout<<"we are in child class";
        }

};

int main()
{
    Demo d1;
    cout<<d1.result(10,15)<<endl;
    d1.show();
    return 0;
}