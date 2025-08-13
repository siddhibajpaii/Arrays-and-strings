#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 12, 7, 9, 20, 33};
    int size = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "Enter the number to search: ";
    cin >> key;

    bool found = false;

    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            cout << "Number " << key << " found at index " << i << "." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Number " << key << " not found in the array." << endl;
    }

    return 0;
}

//Output:
//Enter the number to search: 4
//Number 4 not found in the array.
