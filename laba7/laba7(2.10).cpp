#include <iostream>
using namespace std;
void horizontal_line(int n){
    cout << '+' ;
    for(int i = 0; i < n-2; i++){
        cout << "-";
    }
    cout << '+' << endl;
}
void vertical_line(int n){
     for(int i = 0; i < n-2; i++) {
     cout << '|';
      for(int j = 0; j < n-2; j++){
       cout << " ";
      }
       cout << "|"  << endl;
}
}
int main(void) {
int n;
cout << "Введіть значення ";
cin >> n;
if(n>1 && n<80){
    horizontal_line(n);
    vertical_line(n);
    horizontal_line(n);
}
else if (n<2){
    cout << "Size must be greater than 1" << endl;
}
else{
     cout << "Size must be less than 80" << endl;
}
    
}
