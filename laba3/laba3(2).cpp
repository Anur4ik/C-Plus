#include <iostream>
#include <cwchar> 
using namespace std;

int main() {
 
    char firstLetter;
    cout << "Введіть першу літеру назви міста: ";
    cin >> firstLetter;
    switch (tolower(firstLetter)) {
        case 'k':
        cout << "Місто: Київ\n";
        cout << "Населення: 2.8 млн\n";
        cout << "Площа: 839 кв. км\n";
        break;
        case 'l':
        cout << "Місто: Львів\n";
        cout << "Населення: 721 тис.\n";
        cout << "Площа: 182 кв. км\n";
        break;
        case 'h':
        cout << "Місто: Харків\n";
        cout << "Населення: 1.4 млн\n";
        cout << "Площа: 350 кв. км\n";
        break;
        case 'o':
        cout << "Місто: Одеса\n";
        cout << "Населення: 1 млн\n";
        cout << "Площа: 236 кв. км\n";
        break;
        case 'd':
        cout << "Місто: Дніпро\n";
        cout << "Населення: 1 млн\n";
        cout << "Площа: 405 кв. км\n"; 
        break;
        case 'z':
        cout << "Місто: Запоріжжя\n";
        cout << "Населення: 723 тис.\n";  
        cout << "Площа: 334 кв. км\n";
        break;
        case  'c':
        cout << "Місто: Чернігів\n";
        cout << "Населення: 285 тис.\n";
        cout << "Площа: 79 кв. км\n";
        break;
        default:
        cout << "Місто з такою літерою не знайдено.\n";
    }

return 0;
}