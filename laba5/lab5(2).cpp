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
        break;
    
    }
    else{
    multiple=multiple*x;    
    }
    
}
 std::cout <<"Multiple number "<<multiple;
}
