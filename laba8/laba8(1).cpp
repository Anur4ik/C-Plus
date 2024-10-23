#include <iostream>

using namespace std;
void sortingUp(int numbers[],int count){
      int max;
    for (int j = 0; j < count-1; j++) {
    for (int i = 0; i < count-1; i++) {
      if (numbers[i] > numbers[i + 1]) {
        max = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = max;
      }
    }} 
    cout << endl << "Sorted array Up: " << endl;
  for (int i = 0; i < count; i++)
    cout << numbers[i] << " ";
}
void sortingDown(int numbers[],int count){
     int min;
  for (int j = 0; j < count-1; j++) {
    for (int i = 0; i < count-1; i++) {

      if (numbers[i] < numbers[i + 1]) {
        min = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = min;
      }
    }
  }
   cout << endl << "Sorted array Down: " << endl;
  for (int i = 0; i < count; i++)
    cout << numbers[i] << " ";
}
int main(void) {
    int count=12;
  int numbers[count];
  
  for (int i = 0; i < count; i++) {
    cout << endl << "Enter value #" << i + 1 << ": ";
    cin >> numbers[i];
  }
sortingUp(numbers,count);
sortingDown(numbers,count);
 
 
}
