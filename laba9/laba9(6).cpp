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
   srand(time(NULL));
    const int size = 10;
    int arr[size];
    cout << "Initial array: " << endl;
    initial_array(arr, size);
    printArray(arr, size);
    int zeroPos = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            zeroPos = i;
            break;
        }
    }

    if (zeroPos == -1) {
        cout << "The array does not contain any zeros." << endl;
    }else{
        cout <<"The first null element is at index:"<< zeroPos << endl;
    }
}
