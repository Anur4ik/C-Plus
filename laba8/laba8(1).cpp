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