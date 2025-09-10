#include<iostream>
using namespace std;


int factorial(int num)
{
    int f=1;
    for(int i=1;i<=num;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int num;
    cout<<"enter the number";
    cin>>num;
    cout<<"factorial of the number is:  "<<factorial(num);
    return 0;
}