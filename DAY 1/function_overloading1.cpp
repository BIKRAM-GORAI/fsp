#include<iostream>
using namespace std;

void displayData(string name ,int age)
{
    cout<<"hello world"<<name<<endl;
}

string displayData(string name)
{
    cout<<"welcome"<<name;
    return name;
}


int main()
{
    displayData("GAurav",22);
    displayData("Amit");

    return 0;
}