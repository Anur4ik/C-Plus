#include <iostream>

#include <cmath>
using namespace std;
int main(){
    int last=0;
    int first=0;
    int size = 0;
    int a;//125
    cout<<"Enter number:  ";
    cin>>a;
    int number=a;

        while (number > 0) {
            number /= 10; //125/10=12/10/=1
            size++;//3
        }
        if(a>=10){
         first = a / pow(10, size - 1);//125/100=1
         last=a%10;//125/10=12.5=5
         cout <<last <<"   "<<first<< std::endl; 
         int without_first_and_last = (a - first * pow(10, size - 1)) / 10; //(125-1*100)/10=25/10=2
         
         int change_number = last * pow(10, size - 1) + without_first_and_last * 10 + first;//5*100+2*10+1=500+20+1
         cout<<change_number ; 
        }
        else{
              cout<<a; 
        }
    }


       


  
