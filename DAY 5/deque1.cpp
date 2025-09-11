#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> myDeque;

    myDeque.push_front(45); 
    myDeque.push_front(67); 
    myDeque.push_front(67); 
    cout<<"after pushing front"<<endl;

    for(int val:myDeque)
    {
        cout<<val<<"\t";
    }
    cout<<endl;

    myDeque.push_back(90);
    myDeque.push_back(96);
    myDeque.push_back(967);
    cout<<"after pushing back"<<endl;

    for(int val:myDeque)
    {
        cout<<val<<"\t";
    }
    cout<<endl;

    myDeque.pop_front();
    myDeque.pop_front();
    cout<<"after popping front"<<endl;

    for(int val:myDeque)
    {
        cout<<val<<"\t";
    }
    cout<<endl;

    myDeque.pop_back();
    myDeque.pop_back();
    cout<<"after popping back"<<endl;


    for(int val:myDeque)
    {
        cout<<val<<"\t";
    }
    cout<<endl;

    cout<<"my deque front()="<<myDeque.front()<<endl;    
    cout<<"my deque back()="<<myDeque.back()<<endl;    

    // cout<<myDeque.operator[3];

    cout<<"the elemts at position 4 is"<<myDeque.at(1)<<endl;
    cout<<"the size of the deque is"<<myDeque.size()<<endl;
    cout<<"if deque empty then print 1 or else 0:    "  <<myDeque.empty()<<endl;
    myDeque.clear();
    cout<<"the size of the deque ater using deque.clear() is :   "<<myDeque.size()<<endl;

    

    






}