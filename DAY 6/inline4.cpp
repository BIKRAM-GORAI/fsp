#include<iostream>
using namespace std;

class Dollar;

class Rupee{
    private:
        int value;
        public:
            Rupee(int v) : value(v){}
        friend void displayData(Rupee r,Dollar d);
};

class Dollar
{
    private:
        int value;
    public:
        Dollar(int v):value(v){}
    friend void displayData(Rupee r,Dollar d);
};

void displayData(Rupee r,Dollar d)
{
    cout<<"amount after conversion is:  "<<r.value+d.value*86;
}

int main()
{
    Rupee r1(200);
    Dollar d1(300);
    displayData(r1,d1);
    return 0;

}


