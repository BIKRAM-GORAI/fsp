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
            cout<<endl;
            int min=ar[0];
            int max=ar[0];
            for (int i=1;i<p;i++)
            {
                if (ar[i]<min)
                {
                    min=ar[i];
                }
                if(ar[i]>max)
                {
                    max=ar[i];
                }
            }
            cout<<"maximum element is:  "<<max<<endl;
            cout<<"minimum element is:  "<<min<<endl;


        }
};

int main()
{
    arr obj;
    obj.array();

    return 0;
}