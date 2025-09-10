// private in constructor



#include<iostream>
using namespace std;
class Goods
{
    private:
        double price=398.05;
        string description="electricals";
    public:
        void display()
        {
            cout<<"PRICE:"<<price<<"   DESCRIPTION:"<<description;
        }
};
int main()
{
    Goods obj1;
    // obj1.price=345.08;   //these will give errors because the variables are private so it cannot be accessed outside the class
    // obj1.description="electronic goods";  //these will give errors because the variables are private so it cannot be accessed outside the class
    obj1.display();

    return 0;
}