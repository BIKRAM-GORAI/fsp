#include<iostream>
using namespace std;
int main()
{
    try{
        int choice=9;
        if (choice==1)
        {
            throw 10;
        }
        else if(choice==2)
        {
            throw 3.14;

        }
        else
        {
            throw "unknown error";
        }
    }
    catch(int e)
    {
        cout<<e;
    }
    catch(double d)
    {
        cout<<d;
    }
    catch(const char* msg)
    {
        cout<<msg;
    }
    return 0;

}