#include <iostream>
using namespace std;
int main()
{
    int i = 11;
    int sum = 0;
    do
    {
        sum = sum + i;
        i++;

    } while (i <= 10);    //runs atleast once even if the condition is false
    cout << sum;
    return 0;
}