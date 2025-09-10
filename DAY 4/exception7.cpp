#include <iostream>
#include<string>
using namespace std;

class MyException
{
    private:
        string message;
    public:
    MyException(const string& msg):message(msg){}

    const char* what() const
    {
        return message.c_str();
    }
};

void checkAge(int age)
{
    if (age<18)
    {
        throw MyException("Access denied.you must be 18 years atleast");
    }
    else
    {
        cout<<"access granted.you are old enough"<<endl;
    }
}

int main()
{
    try{
        int userAge;
        cout<<"enter your age:";
        cin>>userAge;
        checkAge(userAge);
    }
    catch(const MyException& e)
    {
        cout<<"custom exception caught: "<<e.what()<<endl;
    }
    return 0;
}