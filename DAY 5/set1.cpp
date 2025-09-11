#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;
    set<string> fruits;
    fruits.insert("apple");
    fruits.insert("orange");
    fruits.insert("banana");
    fruits.insert("apple");
    fruits.insert("apple");
    cout<<"values are:"<<endl;
    for( string a:fruits)
    {
        cout<<a<<"\t";
    }
    cout<<endl;

    if(fruits.count("banana"))
    {
        cout<<"banana is in the set";
    }
    cout<<endl;
    if(fruits.find("apple")!=fruits.end())
    {
        cout<<"apple exists in the set";
    }
    else
    {
        cout<<"apple does not exist in the set";
    }
}