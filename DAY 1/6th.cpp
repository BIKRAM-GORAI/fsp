
//program to make a simple calculator using switch case

#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the two numbers";
    cin >> a >> b;
    cout << "press 1 for addition" << endl;
    cout << "press 2 for subtraction" << endl;
    cout << "press 3 for multiplication" << endl;
    cout << "press 4 for division" << endl;
    cin >> c;

    switch (c)
    {
        case 1:
            cout << "the sum is" << a + b;
            break;
        case 2:
            cout << "the difference is" << a - b;
            break;
        case 3:
            cout << "the product is" << a * b;
            break;
        case 4:
            if (a >= b)
            {
                if (b == 0)
                {
                    cout << "division by 0 not possible";
                }
                else
                {
                    cout << "quotient is" << a / b;
                }
            }

            else if (b >= a)
            {
                if (a == 0)
                {
                    cout << "division by 0 not possible";
                }
                else
                {
                    cout << "quotient is" << b / a;
                }
            }
            break;
        default:
        {
            cout << "invalid choice";
        }
    }
    return 0;
}

