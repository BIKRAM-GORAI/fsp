#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"after pushing elemnts"<<endl;

    for(int val: q)
    {
        cout<<val<<"\t";
    }
    cout<<endl;

    q.pop();
    q.pop();
cout<<"after popping elemnts"<<endl;
    for(int val: q)
    {
        cout<<val<<"\t";
    }
    cout<<endl;

}


//these are the functions that needs to be done
//front()
//back()
//size
//empty()
//clear