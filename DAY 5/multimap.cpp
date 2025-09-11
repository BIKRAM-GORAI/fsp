#include <iostream>
#include <map>
using namespace std;

int main()
{
    multimap<int, string> grades;

    grades.insert({101, "Amit"});
    grades.insert({102, "raj"});
    grades.insert({101, "Arun"});
    grades.insert({104, "Ami"});

    for (auto &pair : grades)
    {
        cout << "ID" << pair.first << "  NAME:  " << pair.second << endl;
    }

    auto range = grades.equal_range(101);
    {
        cout << "\n  Students with ID 101:  " << endl;
    }

    for(auto val=range.first;val!=range.second;val++) //acccesiing with the auto variable
    {
        cout<<"ID: "<<val->first<<"   NAME:  "<<val->second<<endl;

    }
    return 0;
}
