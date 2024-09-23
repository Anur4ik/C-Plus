#include <iostream>
#include <iomanip>
int main() {
    double a = 2.3;
    double b = 2.3;
    double c = 2.123456;
    double d = 2.123456;
    double e = 2.123456;
    std::cout << a << std::endl;                        
    std::cout << std::fixed << std::setprecision(2) << b << std::endl; 
    std::cout << std::setprecision(6) << c << std::endl;    
    std::cout << std::fixed << std::setprecision(2) << d << std::endl; 
    std::cout << static_cast<int>(e) << std::endl;       

    return 0;
}