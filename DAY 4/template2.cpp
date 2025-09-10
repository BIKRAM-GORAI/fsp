#include<iostream>
using namespace std;
template<typename T>
class Box
{
    private:
        T value;
    public:
        void set(T val)
        {
            value=val;
        }
        T get()
        {
            return value;
        }
};

int main()
{
    Box<int> b1;
    b1.set(4500);
    cout<<b1.get()<<endl;

    Box<string> b2;
    b2.set("HELLO STUDENT");
    cout<<b2.get()<<endl;

    Box<double> b3;
    b3.set(45.456664);
    cout<<b3.get()<<endl;

    return 0;
}