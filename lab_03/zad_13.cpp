#include <iostream>

using namespace std;

int main()
{
    int liczba = 457, suma = 0;

    while(liczba != 0){
        suma += liczba %10;
        liczba = liczba / 10;
    }

    cout << "suma cyfr naszej liczby wynosi " << suma << endl;
}
