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
    const int m = 2;  
    const int n = 2;  
    int array[m][n];  
  for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            array[i][j] = rand() % 100 - 50;
            std::cout << array[i][j] << " ";
        }
        std::cout <<  std::endl;
    }
int max=array[0][0];
int maxRow = 0;
int maxCol = 0;
    for (int i = 0; i < m; ++i) {
    
        for (int j = 0; j < n; ++j) {
          if(max<array[i][j]){
              max=array[i][j];
              maxRow = i;
              maxCol = j;
          }   
               
        }
    }
 cout << "Maximum element: " << max << " (row " << maxRow << ", column " << maxCol << ")" << endl;

    return 0;
    
}
