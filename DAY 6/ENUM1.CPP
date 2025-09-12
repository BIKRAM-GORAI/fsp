#include <iostream>
using namespace std;

enum Color {
    RED,
    GREEN,
    BLUE
};

int main() {
    Color myColor = GREEN;

    if (myColor == RED) {
        cout << "The color is Red." << endl;
    } 
    else if (myColor == GREEN) {
        cout << "The color is Green." << endl;
    } 
    else {
        cout << "The color is Blue." << endl;
    }

    int colorValue = BLUE; // This is valid
    cout << "Blue's integer value: " << colorValue << endl;

    return 0;
}