#include <iostream>

using namespace std;
int main(void) {
  
    int arr[] = { 3, -5, 1, -2, 7, -8, 4, 9, -9, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);  
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }

    for (int i = 0; i < maxIndex; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }

    cout << "Modified array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
 
 
}