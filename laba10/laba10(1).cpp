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
    const int m = 4;  
    const int n = 3;  
    int array[m][n];  
  for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 201 - 100;
            std::cout << array[i][j] << " ";
        }
        std::cout <<  std::endl;
    }

    for (int i = 0; i < m; ++i) {
        int evenCount = 0;
        for (int j = 0; j < n; ++j) {
            if (array[i][j] % 2 == 0) {
                evenCount++;
            }
        }
        std::cout << "Number of even numbers in row " << i + 1 << ": " << evenCount << std::endl;
    }

    return 0;
    
}
