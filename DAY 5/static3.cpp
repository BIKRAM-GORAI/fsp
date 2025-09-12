#include <iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"top element is:  "<<s.top()<<endl;
    s.pop();
    cout<<"top element after pop :  "<<s.top()<<endl;

    if(s.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty.  size is :  "<<s.size()<<endl;
    }
    return 0;



}