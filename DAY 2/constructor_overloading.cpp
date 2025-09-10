#include <iostream>
using namespace std;

class overload
{
    public:
        overload()
        {
            cout<<"no parameter"<<endl;
        }

        overload(int a)
        {
            cout<<a<<endl;
        }

        overload(int s,int b)
        {
            cout<<s<<b<<endl;
        }

        overload(double c)
        {
            cout<<c<<endl;
        }
};

int main()
{
    overload obj; //dont write overload obj(); //it will give error
    overload obj1(45);
    overload obj2(90,32);
    overload obj3(34.03);
    
    return 0;
}