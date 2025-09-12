#include<iostream>
#include<queue>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(10);
    pq.push(5);
    pq.push(200);
    pq.push(25);

    cout<<"top element :"<<pq.top()<<endl;
    pq.pop();
    cout<<"top element after pop:"<<pq.top()<<endl;
    return 0;
    
}
