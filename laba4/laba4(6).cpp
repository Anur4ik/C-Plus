#include <iostream>
using namespace std;
void check(double x1,double y1){
    if (-1 <= x1 && x1 <= 1) {
        if (-1 <= y1 && y1 <= 1) {
            if(x1<=0 && y1<=0){ std::cout <<"Координати не входять в ромб ";}
            else {
                std::cout <<" Координати входять в ромб ";
            }
        }
        else{std::cout <<" Координати не входять в ромб";}
    }
    else {
        std::cout <<" Координати не входять в ромб  " ;
    }

}
int main(void) {
bool answer;
int value;
cout << "Enter a value: ";
cin >> value;
answer = (value>=0 && value<10 ? true :  false) ;
cout << value << " >= 0 and " << value << " < 10 \n";
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(\n") << endl;
answer = (value*2<20 && value/2>-2? true :  false) ;
cout << value <<"*2 <20 and "<<value<<"/2 >-2 \n";
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(\n") << endl;
answer = (value-1>1 && value/2<10? true :  false) ;
cout << value <<"-1 >1 and "<<value<<"/2 <10 \n";
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(\n") << endl;
answer = (value==111? true :  false) ;
cout << value <<"=111 \n";
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(\n") << endl;
return 0;
}