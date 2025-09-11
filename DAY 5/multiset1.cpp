//use all the functions of the multiset ,all are not completed here


#include<iostream>
#include<set>
using namespace std;

int main()
{
    multiset<int> m;
    m.insert(20);
    m.insert(50);
    m.insert(60);
    m.insert(60);
    m.insert(800);

    cout<<"the elements after insertion is: "<<endl;
    for(int a:m)
    {
        cout<<a<<"\t";
    }
    cout<<endl;



    m.erase(60);
    cout<<"after using m.erase(60)   :"<<endl;
    for(int a:m)
    {
        cout<<a<<"\t";
    }
    cout<<endl;

    cout<<"returning the ";
    cout<<"finding how many times 50 is present in the multiset :"<<m.count(50);
    int *a=m.begin();
    cout<<"returning the iterator to the 1st element"<<m.begin();



    return 0;
}