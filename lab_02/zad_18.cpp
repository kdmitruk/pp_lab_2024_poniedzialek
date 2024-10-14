#include <iostream>
using namespace std;
enum Weekdays{Saturday, Sunday,Monday, Tuesday, Wednesday, Thursday, Friday};

int main()
{

    int day, month, year;
    //scanf("%d.%d.%d",&day, &month, &year);
    day=14;
    month=10;
    year=2024;
    if (month == 1 || month == 2) {
        month += 12;
    }
    int k = year%100;
    int j = year/100;
    int d = (day + 13*(month+1)/5 + k +k/4 + j/4 - 2*j) % 7;
    Weekdays h=(Weekdays)d;
    switch (h){
    case Monday: cout<<"Poniedzialek"; break;
    case Tuesday: cout<<"Wtorek"; break;
    case Wednesday: cout<<"Sroda"; break;
    case Thursday: cout<<"Czwartek"; break;
    case Friday: cout<<"Piatek"; break;
    case Saturday: cout<<"Sobota"; break;
    case Sunday: cout<<"Niedziela"; break;
    }
    return 0;
}
