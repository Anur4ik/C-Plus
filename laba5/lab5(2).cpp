#include<iostream>
#include<math.h>
#include <cmath>
using namespace std;

int main(){
    int multiple=1;
    int x;
for(int i=1;i<=10;i++){
    cout << " Number :";
    cin >> x;
    if(x<=0){
      multiple=0;
      break;
    }
    else{
    multiple=multiple*x;    
    }
    
}if(multiple==0){
    std::cout <<"A non-natural number is entered";
}
else{std::cout <<"Multiple number "<<multiple;}
 
}
