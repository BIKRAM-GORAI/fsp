#include<iostream>
using namespace std;
int main()
{
    int a=10;
    int b=0;

    try
    {
        if (b==0)
        {
            throw " \n denominator cannot be zero\n"; //just as the program sees the throw it jumps to the catch block without printing anything here
        }
        int result=a/b;
        cout<<result;
    }
    catch(const char* e)
    {
        cout<<"error occoured"<<e<<endl; //the object "e" is responsible for displaying the message inside the throw in try block
    }
    cout<<"program continues";
    return 0;
}