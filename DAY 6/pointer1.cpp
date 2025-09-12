#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    int &r=a;

    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<r<<endl;
    cout<<&r<<endl;

    *p=20;
    cout<<a<<endl;

    r=40;
    cout<<a<<endl;
    return 0;
}