#include<iostream>
#include<math.h>
#include <cmath>
using namespace std;

int main(){
    double a;
    double b;
    cout << " (A) :";
    cin >> a;
    cout << " (B) :";
    cin >> b;
    cout << ((0.5*(log(a) + log(b))) / cbrt(cos(pow(a+b,2)) + exp(a) * (M_PI / 6))) << endl;
    cout << ((7.2 * pow(a + b, ((1 + pow(cos(a), 2) * (1 - cos(b))) + 0.711 * pow(log(a+b), 3))))) << endl;
}