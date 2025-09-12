#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    unordered_map<string,int>city_population;
    city_population["new york"]=800000;
    city_population["london"]=90000;
    city_population["paris"]=200000;

    cout<<"population of new york:  "<<city_population["new york"]<<endl;//acccesinf element
    if(city_population.count("london"))
    {
        cout<<"london is in the map"<<endl;
    }

    cout<<"all cities and thier populationd: "<<endl;
    for(const auto& pair:city_population)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }

    city_population.erase("paris");
    cout<<"after erasing paris ,map size: "<<city_population.size()<<endl;
    
    cout<<"all cities and thier populationd: "<<endl;
    for(const auto& pair:city_population)
    {
        cout<<pair.first<<" : "<<pair.second<<endl;
    }
}


