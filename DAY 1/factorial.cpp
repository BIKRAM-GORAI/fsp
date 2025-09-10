#include<iostream>
using namespace std;
int main()
{
    int fact=1,num;
    cout<<"enter the number";
    cin>>num;
    while (num>=1)
    {
        fact=fact*num;
        num--;
    }
    cout<<fact;

    return 0;
}