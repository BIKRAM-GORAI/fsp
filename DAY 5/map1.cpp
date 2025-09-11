#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<string,int> ages;
    ages["Amit"]=23;
    ages["Ayush"]=25;
    ages["Baidya"]=35;
    ages["Baidya"]=40;
    ages["Bikram"]=33;
    ages.insert({"gourab",34});

    cout<<"age of subham: "<<ages["Bikram"];

    for(auto& pair : ages)
    {
        cout<<pair.first<<"  is  "<<pair.second<<"  years old "<<endl;
    }

    if (ages.count("Amit"))
    {
        cout<<"Amit is in the map "<<endl;
    }

    ages.erase("Ayush");
    for(auto& pair : ages)
    {
        cout<<pair.first<<"  is  "<<pair.second<<"  years old "<<endl;
    }
    return 0;
}