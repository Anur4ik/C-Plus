#include<iostream>
#include<math.h>
#include <cmath>
using namespace std;
void check(double x1,double y1){
    if (-1 <= x1 && x1 <= 1) {
        if (-1 <= y1 && y1 <= 1) {
            if(x1<=0 && y1<=0){ std::cout <<"Координати не входять в ромб ";}
            else {
                std::cout <<" Координати входять в ромб ";
            }
        }
        else{std::cout <<" Координати не входять в ромб";}
    }
    else {
        std::cout <<" Координати не входять в ромб  " ;
    }

}
int main(){

    double x1;
    double y1;
    std::cout << "Enter x = ";
    std::cin >> x1;
    std::cout << "Enter y = ";
    std::cin >> y1;
    check(x1,y1);
}
