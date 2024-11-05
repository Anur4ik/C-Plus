// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Date
{
    int hours;
    int minutes;
};
void displayTheTime(Date date){
    
    while(date.minutes>59){
        date.minutes=date.minutes-60;
        date.hours++;
         if(date.hours>23){
           date.hours=0;
      }
    }
cout<<(date.hours<10 ?"0":" " )<< date.hours << " : "<< (date.minutes<10 ?"0":" " )<<date.minutes  ;
}
int main() {
    Date date;
    int addMinute;
    cout << "Enter hour ";
    cin >> date.hours;
    cout << "Enter minute ";
    cin >> date.minutes;
   if(date.hours<0||date.hours>24){
    cout << "Incorrect hours entered (from 0 to 23)"<<endl;
     if(date.minutes<0||date.minutes>60){
    cout << "Incorrect minutes entered (from 0 to 60)"<<endl;
    }
    return 0;
    }
    cout << "Enter minute which need add ";
    cin >> addMinute;
    date.minutes=date.minutes+addMinute;
    displayTheTime(date);
     return 0;

}
