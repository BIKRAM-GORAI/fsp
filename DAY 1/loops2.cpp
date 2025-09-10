#include<iostream>
using namespace std;
int main()
{
    int num,rev=0;
    cout<<"enter a number";
    cin>>num;
    while(num>0)
    {
        int rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }

    cout<<"the reversed number is: "<<rev;


    return 0;
}

