#include<iostream>
using namespace std;

class Students
{
    private:
        string name;
        int roll;
    public:
        Students(string n,int r):name(n),roll(r){}
        friend void displayData(Students& s);
};

void displayData(Students& s)
{
    cout<<s.name<<" "<<s.roll;
}

int main()
{
    Students s1("Amit",231);
    displayData(s1);
    return 0;
    
}
