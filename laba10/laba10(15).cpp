#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
     cout << endl;
}

int main(void) {
    srand(time(0));
    const int m = 3;  
    const int n = 3;  
    int array[m][n];  
  for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 - 50;
            std::cout << array[i][j] << " ";
        }
        std::cout <<  std::endl;
    }

     int firstDiagonalSum = 0;
    int secondDiagonalSum = 0;

    for (int i = 0; i < m; ++i) {
        firstDiagonalSum += array[i][i];             
        secondDiagonalSum += array[i][n - 1 - i];  
    }

    std::cout << "Sum of numbers on the first diagonal: " << firstDiagonalSum << std::endl;
    std::cout << "Sum of numbers on the second diagonal: " << secondDiagonalSum << std::endl;


    return 0;
    
}
