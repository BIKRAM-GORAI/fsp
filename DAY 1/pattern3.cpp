#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter table size:\n";
    cin>>r;

    for(int i=r;i>=1;i--)
    {
        for (int j=1;j<=i;j++)
        {
            cout<<j<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}

// enter table size:
// 5
// 1  2  3  4  5  
// 1  2  3  4
// 1  2  3
// 1  2
// 1