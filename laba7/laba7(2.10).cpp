#include <iostream>
using namespace std;
int main(void) {
    int n;
cout << "Введіть значення ";
cin >> n;
if(n>1)
{ 
    cout << '+' ;
    for(int i = 0; i <= n; i++){
        cout << "- ";
    }
    cout << '+' << endl;
    for(int i = 0; i <= n; i++) {
     cout << '|';
      for(int j = 0; j <= n; j++){
       cout << ' ';
      }
      for(int j = 0; j <= n; j++)
      {
            cout << " " ;
      }
       cout << "|"  << endl;
}
     cout << '+';
     for(int i = 0; i <= n; i++){
     cout <<  "- ";
     }
     cout << '+' << endl;
}
else{
  cout <<  "Введіть додатнє число більше 1";
}
}