#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    int sum = 0;

    // Calculate sum
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // Calculate average
    float average = (float)sum / size;

    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0;
}

//Output:
//Sum of array elements: 150
//Average of array elements: 30
