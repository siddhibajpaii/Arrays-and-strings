#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
   
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "The elements of the array are:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}

//Output:
//The elements of the array are:
//10 20 30 40 50
