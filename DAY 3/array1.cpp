#include <iostream>
using namespace std;

class arr
{
    public:
        void array()
        {
            int ar[4]={10,20,30,40};
            int size=sizeof(ar);
            int n=size/sizeof (ar[0]);
            cout<<"size of the array is"<<size<<endl;
            for(int i=0;i<n;i++)
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