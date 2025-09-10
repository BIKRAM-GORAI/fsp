#include <iostream>
using namespace std;

template <typename T>

T squares(T x)
{
    T result = x * x;
    return result;
}

template <>
string squares<string>(string s)
{
    return "not applicable for strings";
}

int main()
{
    cout << squares<int>(5) << endl;
    cout << squares<double>(4.5) << endl;
    cout << squares<string>("hello world") << endl;
    return 0;
}
