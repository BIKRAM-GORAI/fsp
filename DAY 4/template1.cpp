#include<iostream>
using namespace std;



template <typename T>//is we dont write the variable type and just write a templete with a variable"T" then it will adapt to the variable type that we send
T showMax(T a ,T b)
{
    return(a>b)?a:b;
}

int main()
{
    cout<<showMax(10,20)<<endl;;
    cout<<showMax(12.14,20.78);
    
}