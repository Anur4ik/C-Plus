#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
void initial_array(int arr[], int size){
    for (int i = 0; i < size; i++) {
      arr[i] = rand() % 201 - 100;//  генерує випадкове число від 0 до 200 зміщує діапазон на 100, щоб він починався від -100 і закінчувався на 100.
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
    initial_array(arr,size);
    printArray(arr, size);
    int numA;
    cout << endl << "Enter a number: ";
    cin >> numA;
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > numA) {
            count++;
        }
    }
    cout << "Number of elements greater than " << numA << ": " << count << endl;
 
}