#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter table size:\n";
    cin>>r;

    for(int i=1;i<=r;i++)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}