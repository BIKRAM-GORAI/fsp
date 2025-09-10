#include <iostream>
using namespace std;

int main() {
    
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;
    
    cout << "Enter array index: ";
    cin >> index;
    
    try {    
        if (index >= 4)
            throw "Error: Array out of bounds!"; 
        
        cout << "Enter numerator: ";
        cin >> numerator;
    
        cout << "Enter denominator: ";
        cin >> denominator;     
          
        if (denominator == 0)
            throw 0;    
        arr[index] = numerator / denominator;
        cout << arr[index] << endl;
    }
    catch (...) {
        cout << "Unexpected exception!" << endl;
    }
    
    return 0;    
}