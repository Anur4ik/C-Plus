// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
struct Date
{
    int hours;
    int minutes;
};

Date calculateDuration(const Date start, const Date end){
    Date duration;
    duration.hours = end.hours - start.hours;
    duration.minutes = end.minutes - start.minutes;

    if (duration.minutes < 0) {
        duration.minutes += 60;
        duration.hours--;
    }
    if (duration.hours < 0) {
        duration.hours += 24;
    }

    return duration;
}
int main() {
    Date start, end;
    cout << "Enter the event start time" << std::endl;
    cout << "Enter Hours(hours 0-23):";
    cin >> start.hours;
    cout << "Minutes:";
    cin >> start.minutes;
    if(start.hours<0||start.hours>24){
        cout << "Incorrect hours entered (from 0 to 23)"<<endl;
        if(start.minutes<0||start.minutes>60){
            cout << "Incorrect minutes entered (from 0 to 59)"<<endl;
        }
        return 0;
    }
    cout << "Enter the event end time " << std::endl;
    cout << "Hours:";
    cin >> end.hours;
    cout << "Minutes:";
    cin >> end.minutes;
    if(end.hours<0||end.hours>24){
        cout << "Incorrect hours entered (from 0 to 23)"<<endl;
        if(end.minutes<0||end.minutes>60){
            cout << "Incorrect minutes entered (from 0 to 59)"<<endl;
        }
        return 0;
    }
    Date duration = calculateDuration(start, end);
    cout<<(duration.hours < 10 ? "0" : "") <<  duration.hours  << " : "<< (duration.minutes < 10 ? "0" : "") <<duration.minutes;
    return 0;

}