#include <iostream>
#include<math.h>
#include <cmath> 
using namespace std;
void count(int c0){
    int steps=0;
    while(c0!=1){
          steps++;
        if(c0%2==0){
            c0= c0/2;
        }
        else{
            c0 =(3*c0)+1;
        }
        cout <<c0 << endl;
    }
         std::cout <<"sTEPS: "<<steps<< endl;
}
int main() {
    int c0;
    cout << "Enter values ";
    cin >> c0;
    if(c0>0){
             count(c0);
    }
    else{
         cout <<"number does not match"<< endl;
    }
    
   
}
