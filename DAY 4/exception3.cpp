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
            throw runtime_error(" \n denominator cannot be zero\n"); //just as the program sees the throw it jumps to the catch block without printing anything here,we are also defining the type of error
        }
        int result=a/b;
        cout<<result;
    }
    catch(const runtime_error &e)
    {
        cout<<"error occoured"<<e.what()<<endl; //the object "e" is responsible for displaying the message inside the throw in try block,we need to write object.what()
    }
    cout<<"program continues";
    return 0;
}