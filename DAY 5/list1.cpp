#include<iostream>
#include<list>
using namespace std;
int main()
{
    list<int> myList;

    myList.push_back(34);
    myList.push_back(64);
    myList.push_back(36);
    myList.push_back(84);
    myList.push_back(84);
    myList.push_back(84);
    myList.push_back(84);
    myList.push_front(800);

    cout<<"the elements are:"<<endl;

    for(int val:myList)
    {
        cout<<val<<"\t";
    }
    cout<<endl;


    cout<<"the size of the vector is:"<<myList.size()<<endl;

    myList.pop_front();
    myList.pop_back();
    cout<<"after popping the elments are:"<<endl;
    for(int val:myList)
    {
        cout<<val<<"\t";
    }
    cout<<endl;

    myList.remove(84);
    cout<<"after using myList.remove(84):"<<endl;
    for(int val:myList)
    {
        cout<<val<<"\t";
    }
    cout<<endl;

    if(myList.empty())
    {
        cout<<"list is empty";
    }
    else
    {
        cout<<"list is not empty";
    }



    // cout<<"element at position 3 is: "<<myList.at(2)<<endl;
    // myList.clear();
    // cout<<"Size of vector: "<<myList.size()<<endl;
    
    return 0;
}
