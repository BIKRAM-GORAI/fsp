#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> arr={ 4,6,3,89,2};
    reverse (arr.begin(),arr.end());
    for(int x:arr)
    {
        cout<<x<<" ";
    }
    return 0;

}