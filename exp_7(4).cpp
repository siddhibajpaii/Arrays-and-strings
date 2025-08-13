#include <iostream>
using namespace std;

int main() {
    int size;

    // Ask user for size of array
    cout << "Enter the number of elements: ";
    cin >> size;

    int arr[size]; // Declare array

    // Take array input from user
    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int min = arr[0];

    // Find max and min
    for (int i = 1; i < size; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "Maximum value in array: " << max << endl;
    cout << "Minimum value in array: " << min << endl;

    return 0;
}

//Output:
//Enter the number of elements: 5
//Enter 5 elements:
//2
//8
//3
//6
//0
//Maximum value in array: 8
//Minimum value in array: 0
