#include<iostream>
using namespace std;
class Academic
{
    public:
        int roll;
        string address;
        Academic(int r,string a)
        {
            roll=r;
            address=a;
        }
        Academic(Academic &ar)
        {
            roll=ar.roll;
            address=ar.address;
        }
        void showdata()
        {
            cout<<"roll:"<<roll<<"  address:"<<address;

        }
};
int main()
{
    Academic a1(123,"kolkata");
    Academic a2(a1);
    a2.showdata();

    return 0;
}