#include <iostream>
using namespace std;
int main(void) {
double pi4 = 0.;
long n;
cout << "Number of iterations? ";
cin >> n;
for (int i = 0; i < n; i++) {
        pi4 += (i % 2 == 0 ? 1.0 : -1.0) / (2.0 * i + 1.0);
    }
cout.precision(20);
cout << "Pi = " << (pi4 * 4.) << endl;
return 0;
}