#include<iostream>
#include<math.h>
#include <cmath>

int main(){
 int count = 0;
            int number;
            std::cout << "Enter number(xxx) = ";
            std::cin >> number;

            int first = number / 100;
            int second = (number / 10) % 10;
            int third = number % 10;

            if (first != 1 && first != 9) {
                count++;
            }

            if (second != 1 && second != 9) {
                count++;
            }

            if (third != 1 && third != 9) {
                count++;
            }
            std::cout << "Count numbers which are not equal to 1 and 9 = " << count << std::endl;
}
