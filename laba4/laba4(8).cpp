#include <iostream>
using namespace std;

int main() {
    bool answer;
    float a;
    float b;
    std::cout << "Enter the first integer: ";
    std::cin >> a;

    std::cout << "Enter the second integer: ";
    std::cin >> b;
answer = (1/a-1/b<0.000001? true :  false) ;
if(answer==true){
    cout << "Results are equal (by 0.000001 epsilon)"<< endl;
    }
    else{
        cout <<  "Results are not equal (by 0.000001 epsilon)\n") << endl;
    }

    return 0;
}
