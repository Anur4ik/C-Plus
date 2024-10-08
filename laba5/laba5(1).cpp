#include<iostream>
#include <cmath>
using namespace std;

int main(){
    double x;
  for(int i=0;i<=5;i++){
        cout << "x"<<i<<" = ";
         cin >> x;
         cout <<  pow(sin(x),5)+abs(5*x-1.5)<< endl;
  }
    
    
}
