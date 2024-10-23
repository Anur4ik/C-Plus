#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void initial_array(int arr[], int size){
    for (int i = 0; i < size; i++) {
      arr[i] = rand() % 201 - 100;//  генерує випадкове число від 0 до 200 зміщує діапазон на 100, щоб він починався від -100 і закінчувався на 100.
    }
}
void modified_array(int arr[], int size){
     int minIndex,maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    int max = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = max;
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
    initial_array(arr,size);
    printArray(arr, size);
    modified_array(arr,size);
    cout << "Modified array (max and min swapped): " << endl;
    printArray(arr, size);
}
