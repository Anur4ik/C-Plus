#include <iostream>

#include <cmath>
int main(){
    int last=0;
    int first=0;
    int k,count;
    int a=1234;
    last=a%10;
 int size = 0;
 int number=a;
    if (number == 0) {
        size = 1; 
    } else {

        while (number > 0) {
            number /= 10; 
            size++;
            
        }
        first = a / pow(10, size - 1);
         std::cout <<last <<"   "<<first<< std::endl; 
         int without_first_and_last = (a - first * pow(10, size - 1)) / 10; 
         int change_number = last * pow(10, size - 1) + without_first_and_last * 10 + first;
         std::cout<<change_number ; 
    }
}

       


  
