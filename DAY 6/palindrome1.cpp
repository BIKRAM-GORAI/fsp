#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s;
    cout<<"enter a string";
    cin>>s;

    string r = s;
    reverse(r.begin(), r.end()); 
    if (s==r)
    {
        cout<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
}