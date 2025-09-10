#include<iostream>
using namespace std;
int main()
{
    int r;
    cout<<"enter table size:\n";
    cin>>r;

    for(int i=r;i>=1;i--)
    {
        for (int j=i;j>=1;j--)
        {
            cout<<j<<"  ";
        }
        cout<<"\n";
    }
    return 0;
}

// enter table size:
// 5
// 5  4  3  2  1  
// 4  3  2  1
// 3  2  1
// 2  1
// 1