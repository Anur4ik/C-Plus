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
    const int n = 7;  
    int array[m][n];  
  for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 - 50;
            std::cout << array[i][j] << " ";
        }
        std::cout <<  std::endl;
    }
int min=array[0][0];
int minRow = 0;
int minCol = 0;
    for (int i = 0; i < m; ++i) {
    
        for (int j = 0; j < n; ++j) {
          if(min>array[i][j]){
              min=array[i][j];
              minRow = i;
              minCol = j;
          }   
               
        }
    }
 cout << "Maximum element: " << min << " (row " << minRow << ", column " << minCol << ")" << endl;

    return 0;
    
}
