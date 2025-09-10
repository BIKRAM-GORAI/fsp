//program to find the sum of first 10 odd natural number

#include<iostream>
using namespace std;
int main()
{
    int sum=0;
    for (int i=1;i<=10;i=i+2)
    {
        sum=sum+i;
    }
    cout<<"the sum of 1st 10 odd natural number is:  "<<sum;

    return 0;
}