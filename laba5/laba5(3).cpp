#include <iostream>
#include<math.h>
#include <cmath> 
int main() {
    double a, b, h;
    std::cout << "Введіть початок відрізка a: ";
    std::cin >> a;
    std::cout << "Введіть кінець відрізка b: ";
    std::cin >> b;
    std::cout << "Введіть крок h: ";
    std::cin >> h;  
    std::cout <<"-----------"<< std::endl;
    std::cout <<" x     y  "<< std::endl;
    std::cout <<"-----------"<< std::endl;
      for (double x = a; x <= b; x += h) {
         double y = pow(cos(x), 1/2) + sin(x);
    
        std::cout <<" " <<x<<"   "<< round(y* 100) / 100 << std::endl;
    }
}