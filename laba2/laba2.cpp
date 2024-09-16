
#include<iostream>
#include<math.h>
#include <cmath>
int main() {
    int x;
    while (1) {
        std::cout << "Enter x = ";
        std::cin >> x;

        if (x == 1) {
            std::cout << "x <1 " << x << std::endl;
            std::cout << ((6 * pow(x, 2)) / 3) << std::endl;
        }
        else {
            std::cout << "x >1 " << x << std::endl;
            std::cout << (5 * pow(x, 2) - 4) / 12 << std::endl;
        }
    }

    return 0;
}