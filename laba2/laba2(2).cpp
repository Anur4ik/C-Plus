#include<iostream>
#include<math.h>


void check(double x, double y){
    if (x >= 0 && x <= 1) {
        if (y <= 1 - x && y >= -1 + x) {
            std::cout << "Координати входять в ромб ";
        } else {
            std::cout << "Координати не входять в ромб ";
        }
    } else if (x >= -1 && x <= 0) {
        if (y <= 1 + x && y >= 0) {
            std::cout << "Координати входять в ромб ";
        } else {
            std::cout << "Координати не входять в ромб ";
        }
    } else if (x == 0) {
        if (y >= -1 && y <= 1) {
            std::cout << "Координати входять в ромб ";
        } else {
            std::cout << "Координати не входять в ромб ";
        }
    }
    else{ std::cout << "Координати не входять в ромб ";}
}

int main(){
    double x1, y1;
    std::cout << "Enter x = ";
    std::cin >> x1;
    std::cout << "Enter y = ";
    std::cin >> y1;
    check(x1, y1);

    return 0;
}
