#include<iostream>
using namespace std;

template <typename T>
void swapNumber( T &a, T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    swapNumber(x,y);
    cout<<x<<" "<<y<<endl;

    double p= 23.45,q=67.89;
    swapNumber(p,q);
    cout<<p<<" "<<q<<endl;
    return 0;
}