#include<iostream>
using namespace std;

int globalVal=10;
void displayData()
{
    globalVal=200;
    int val=20;
    cout<<"inside function"<<val<<endl;
    cout<<"inside function"<<globalVal<<endl;
    
}



int main()
{
    displayData();
    cout<<globalVal;


    return 0;
}