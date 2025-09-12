#include <iostream>
#include <tuple>
using namespace std;
int main()
{
    tuple<string, int, double> t1("Baidya", 177, 8.99);    // CONSTRUCTOR
    tuple<string, int, double> t2 = {"Bikram", 179, 7.99}; // LIST
    auto t3 = make_tuple("Ayush", 175, 8.22);              // USING KEYWORD
    cout << get<0>(t1) << endl;                            // GIVES BAIDYA
    cout << get<1>(t1) << endl;
    cout << get<2>(t1) << endl;
    string n;
    int r;
    double d;
    tie(n, r, d) = t2;
    cout << n << endl;
    cout << r << endl;
    cout << d << endl;

    return 0;
}