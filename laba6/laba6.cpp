#include <iostream>
#include <string>
int main(){
    std::cout<<"Введіть Натуральне число ";
    std::string number; 
    std::cin>>number;
    if(number.length()<=1){
    std::cout<<"Введено не натуральне число ";
          return 0;
    }
    else{
      std::swap(number[0],number[number.length()-1]);
      std::cout<<number;
    }

    
}