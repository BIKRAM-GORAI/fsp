#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> myVector;

    myVector.push_back(34);
    myVector.push_back(64);
    myVector.push_back(36);
    myVector.push_back(84);
    myVector.push_back(84);

    cout<<"the elements are:"<<endl;

    for(int val:myVector)
    {
        cout<<val<<"\t";
    }
    cout<<endl;
    cout<<"the size of the vector is:"<<myVector.size()<<endl;
    return 0;
}
