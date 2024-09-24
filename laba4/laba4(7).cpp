#include <iostream>
#include <iomanip>
int main() {
    double a;
    std::cout << "Enter the first integer:";
    std::cin >> a;
    std::cout << a<< std::endl;                        
    std::cout << std::fixed << std::setprecision(2) << a << std::endl; 
    std::cout << std::setprecision(6) << a << std::endl;    
    std::cout << std::fixed << std::setprecision(2) << a << std::endl; 
    std::cout << (int)a << std::endl;       

    return 0;
}
