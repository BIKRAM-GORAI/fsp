#include<iostream>
using namespace std;

class Box
{
    private:
        double length;
    public:
        Box(double l):length(l){}

        friend inline void display(Box b)
        {
            cout<<"length: "<<b.length<<endl;
        }
};

int main()
{
    Box b1(10.45),b2(82.45),b3(90.45);
    display(b1);
    display(b2);
    display(b3);
    return 0;
}