#include <iostream>
#include <algorithm>

int main() {
 int count=12;
    int m[count]; 
    for(int i=0;i<count;i++){
    m[i] = i+1; 
    }
 
    std::cout << "Зростанням: ";
    for (int i = 0; i < 12; i++) {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;
    std::sort(m, m + 12, std::greater<int>());
    std::cout << "Спаданням: ";
    for (int i = 0; i < 12; i++) {
        std::cout << m[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}









#include <iostream>

using namespace std;
int main(void) {
    int count=3;
  int numbers[count];
  int max;
  
  for (int i = 0; i < count; i++) {
    cout << endl << "Enter value #" << i + 1 << ": ";
    cin >> numbers[i];
  }[3,2,1]==[2,2,1]
  for (int j = 0; j < count-1; j++) {
    for (int i = 0; i < count-1; i++) {
      if (numbers[i] > numbers[i + 1]) {
        max = numbers[i];//3
        numbers[i] = numbers[i + 1];//[2,2,1]
        numbers[i + 1] = max;//[2,3,1]
      }
    }}
 
 
  cout << endl << "Sorted array: " << endl;
  for (int i = 0; i < count; i++)
    cout << numbers[i] << " ";
  cout << endl;
  return 0;
}
