#include<iostream>
#include<exception>
using namespace std;

class MyClass:public exception
{
    public:
        const char* what() const override
        {
            throw "custom exception";
        }
};

int main()
{
    try
    {
        throw MyClass();
    }
    catch(const exception& e)
    {
        cerr <<e.what()<<"\n";
    }
    return 0;
}
