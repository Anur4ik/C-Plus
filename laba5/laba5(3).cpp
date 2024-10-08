#include <iostream>
#include<math.h>
#include <cmath> 
using namespace std;
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
    if(a<b){
  for (double x = a; x <= b; x += h) {
       if(cos(x)<0){
           cout<<"Odz is not satisfied";
           break;
       }
    
         double y =sqrt(cos(x)) + sin(x);
         std::cout <<" " <<x<<"   "<< round(y* 100) / 100 << std::endl;
    
  }  
}}
