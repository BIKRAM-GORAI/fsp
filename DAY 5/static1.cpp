#include <iostream>
#include <map>
using namespace std;

void result()
{
    static int value=0;
    cout<<value<<"\t";
    value++;
}//when using static then it prints 0 1 2 3

void result1()
{
    int value=0;
    cout<<value<<"\t";
    value++;
}//when not using static then it prints 0 0 0 0
//because it initialises the value=0 everytime the function is called



int main()
{
    result();
    result();
    result();
    result();

    cout<<endl;
    
    result1();
    result1();
    result1();
    result1();
    return 0;
}