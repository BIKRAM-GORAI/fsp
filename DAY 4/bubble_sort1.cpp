#include <iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }

}

int main()
{
    int n;
    cout << "enter the no of elements in the array";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "the current array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }

    bubblesort(arr,n);
    
    cout << "\n the sorted  array is" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return 0;
}