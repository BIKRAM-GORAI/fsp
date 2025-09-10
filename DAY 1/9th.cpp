#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter table size:\n";
    cin>>size;
    for (int i=1;i<=size;i++)
    {
        for (int j=1;j<=size;j++)
        {
            cout<<i*j<<"\t";

        }
        cout<<"\n";
    }


    return 0;
}