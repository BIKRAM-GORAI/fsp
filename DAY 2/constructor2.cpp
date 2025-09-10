
//program using parameterised constructor



#include<iostream>
using namespace std;
class Accounts
{
    public:
        double salary;
        string name;

        Accounts(double s,string n)  //constructor taking parameter
        {
            salary=s; 
            name=n;
        }
        void showdata()
        {
            cout<<"NAME: "<<name<<"  SALARY:  "<<salary<<endl;
        }
};
int main()
{

    Accounts *obj=new Accounts(56.01,"amit"); //declaring using new  keyword(have to use pointer)
    obj->showdata();
    delete obj;  //to free up the space

    Accounts obj1(45.00,"hello"); //declaring normally
    obj1.showdata(); //calling the showdata function
    //no need to free space as it is freed normally

    return 0;
}