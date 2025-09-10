
//program to print grade according to marks

#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"enter marks";
    cin>>m;

    if (m>=40)
    {
        if(m>=90)
        {
            cout<<"A grade";
        }
        else if(m>=80)
        {
            cout<<"B grade";
        }
        else if(m>=70)
        {
            cout<<"C grade";
        }
        else
        {
            cout<<"D grade";
        }
        

    }
    else
    {
        cout<<"you failed";
    }

    return 0;
}