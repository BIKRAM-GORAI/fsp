#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> myVector={10,45,44,98,90,59,56};//new way of declaring vector


    cout<<"the elements are:"<<endl;
    //vector<int>::iterator it=v.begin //if we dont write auto variable them we will have to write this 

    for(auto it=myVector.begin();it!=myVector.end();it++)//new way to write for loop
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
    cout<<"the size of the vector is:"<<myVector.size()<<endl;
    myVector.pop_back();
    cout<<"after popping the elments are:"<<endl;
    for(int val:myVector)//this is the common way(also the easy way)
    {
        cout<<val<<"\t";
    }
    cout<<endl;
    
    return 0;
}
