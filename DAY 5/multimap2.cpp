#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<string,int> ages;
    ages["AMIT"]=20;
    ages["Kunal"]=30;
    ages["Gaurav"]=40;



    map<string,int>::iterator itr;
    for(itr=ages.begin();itr!=ages.end();++itr) //accessing without the auto variable
    {
        cout<<"Name: "<<itr->first<<" Age: "<<itr->second<<endl;  
    }


    for(auto itr=ages.begin();itr!=ages.end();++itr) //accessing with the auto variable
    {
        cout<<"Name: "<<itr->first<<" Age: "<<itr->second<<endl;  
    }
    return 0;
}