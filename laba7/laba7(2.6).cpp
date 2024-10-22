#include <iostream>
#include<math.h>
#include <cmath> 
using namespace std;
void count(int c0){
    bool a=true;
    int steps=0;
    while(a ==true){
      if(c0!=1){
          steps++;
        if(c0%2==0){
            c0= c0/2;
        }
        else{
            c0 =(3*c0)+1;
        }
        cout <<c0 << endl;
    }
    else{
         std::cout <<"sTEPS: "<<steps<< endl;
            a=false;
    }
    }
    
}
int main() {
    int c0;
    cout << "Введіть значення ";
    cin >> c0;
    if(c0>0){
             count(c0);
    }
    else{
         cout <<"число не підходить"<< endl;
    }
    
   
}
