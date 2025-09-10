//program to find factorial of a number


#include<iostream>
using namespace std;
int main()
{
    int f,p=1;
    cout<<"enter the number";
    cin>>f;
    for(int i=1;i<=f;i++)
    {
        p=p*i;
    }

    cout<<"factorial is:  "<<p;

    return 0;
}