#include<iostream>
#include<utility>
using namespace std;

int main()
{
    pair<int,string>mypair(1,"amit");


    cout<<"first element:"<<mypair.first<<endl;
    cout<<"second element:"<<mypair.second<<endl;

    auto anotherPair=make_pair(10.45,"hello world");

    cout<<"another pair: "<<anotherPair.first<<" ,"<<anotherPair.second<<endl;
    mypair.first=212;
    mypair.second="kunal";
    cout<<"modified pair : "<<mypair.first<<" ,"<<mypair.second<<endl;
    return 0;
}