#include <iostream>
using namespace std;
int main(void) {
bool answer;
int value;
cout << "Enter a value: ";
cin >> value;
if(value>=0 && value<10 ){answer=true;}else{answer=false;}
cout << value << " >= 0 and " << value << " < 10 \n";
cout << (answer ? "THAT'S TRUE :" : "THAT'S NOT TRUE :(\n") << endl;
if(value*2<20 && value/2>-2 ){answer=true;}else{answer=false;}
cout << value <<"*2 <20 and "<<value<<"/2 >-2 \n";
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(\n") << endl;
if(value-1>1 && value/2<10){answer=true;}else{answer=false;}
cout << value <<"-1 >1 and "<<value<<"/2 <10 \n";
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(\n") << endl;
if(value==111){answer=true;}else{answer=false;}
cout << value <<"=111 \n";
cout << (answer ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(\n") << endl;
return 0;
}
