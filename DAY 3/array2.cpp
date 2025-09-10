#include <iostream>
using namespace std;

class arr
{
    public:
        void array()
        {
            int p;
            cout<<"enter the size of the array"<<endl;
            cin>>p;
            int ar[p];
            cout<<"enter the elements";
            for(int i=0;i<p;i++)
            {
                cin>>ar[i];
            }
            cout<<"the array elements are:"<<endl;
            for(int i=0;i<p;i++)
            {
                cout<<ar[i]<<" ";
            }

        }
};

int main()
{
    arr obj;
    obj.array();

    return 0;
}