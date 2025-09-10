#include <iostream>
using namespace std;

class arr
{
    public:
        void array()
        {
            int r,c;
            cout<<"enter the rowz and columns"<<endl;
            cin>>r>>c;
            int ar[r][c];
            cout<<"enter the elements";
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    cin>>ar[i][j];
                }
            }
            cout<<"the array elements are:"<<endl;
            for(int i=0;i<r;i++)
            {
                for(int j=0;j<c;j++)
                {
                    cout<<ar[i][j]<<"\t";
                }
                cout<<"\n";
            }

        }
};

int main()
{
    arr obj;
    obj.array();

    return 0;
}