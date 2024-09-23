#include <iostream>
#include<math.h>
#include <cmath> 
void count(int c){
    bool a=true;
    int count=0;
    while(a ==true){
        count++;
        if(c%2==0){
            c= c/2;
            std::cout <<c<< std::endl;
        }
        else if(c==1){
            std::cout <<"sTEPS: "<<count-1<< std::endl;
            a=false;
        }else{
            c =(3*c)+1;
            std::cout <<c << std::endl;
        }
    }
}
int main() {
    int c=0;
    std::cout << "Введіть значення ";
    std::cin >> c;
    if(c>0){
             count(c);
    }
    else{
         std::cout <<"число не підходить"<< std::endl;
    }
    
   
}