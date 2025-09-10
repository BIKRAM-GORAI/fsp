
//program to take input of different data types


#include<iostream>
#include<string>//used to take input string properly
using namespace std;
int main()
{
    int a;
    float f;
    char c;
    string s;

    cout<<"enter a integer"<<endl;
    cin>>a;
    cout<<"enter a float"<<endl;
    cin>>f;
    cout<<"enter a character"<<endl;
    cin>>c;
    cout<<"enter a string"<<endl;


    cin.ignore();   // removes the leftover newline
    getline(cin ,s);
    bool passed;

    
    // cin>>s; //if we take input like this then it will not consider anything after space
    cout<<a<<endl;
    cout<<f<<endl;
    cout<<c<<endl;
    cout<<s<<endl;

    cout<<"enter 1 for passed and 0 for fail"<<endl;
    cin>>passed;
    cout<<"you passed status is:"<<(passed?"passed":"fail");

    return 0;
}