#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void initial_array(int arr[], int size){
    for (int i = 0; i < size; i++) {
      arr[i] = rand() % 10-5 ;//  генерує випадкове число від 0 до 200 зміщує діапазон на 100, щоб він починався від -100 і закінчувався на 100.
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
     cout << endl;
}

int main(void) {
    srand(time(0));

    const int size = 10;
    int arr[size];
    cout << "Initial array: " << endl;
    initial_array(arr, size);
    printArray(arr, size);
    int largest = arr[0], secondLargest = -1;
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    for (int i = 0; i < size; ++i)
    {
        if (arr[i] != largest)
        {
            if ( arr[i] > secondLargest)
            {
                secondLargest = arr[i];
            }
        }
    }

    if (secondLargest != -1)
    {
        cout << "The second largest element: " << secondLargest << endl;
    }
    
}