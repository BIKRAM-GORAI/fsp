// enter table size:
// 5
//     *
//    ***
//   *****
//  *******
// *********

#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter table size:\n";
    cin>>r;

    for(int i=1;i<=r;i++)
    {
        for(int j=r-i;j>=1;j--)
        {
            cout<<" ";
        }
        for (int k=1;k<=(2*i-1);k++)
        {
            cout<<"*";
        }
        cout<<"\n";

    }
}