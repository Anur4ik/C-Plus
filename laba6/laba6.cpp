#include <iostream>

#include <cmath>
int main(){
    int last=0;
    int first=0;
    int k,count;
    int a=12345;

 int size = 0;
 int change_number;
 int number=a;
    if (number == 0) {
        size = 1; 
    } else {

        while (number > 0) {
            
            if(size==0){
                last=a%10;
            }
            number /= 10; 
            size++;
            
        }
            first = a / pow(10, size - 1);
      
           std::cout <<last <<"   "<<first<< std::endl; 
           change_number=a-first*pow(10,size-1)+last*pow(10,size-1);
           std::cout <<change_number;  
    }
}
    
       

