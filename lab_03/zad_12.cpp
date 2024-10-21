#include <iostream>

using namespace std;

int main()
{
    int liczba = 222, cyfry = 0;
    if(liczba == 0){
        cyfry = 1;
    }else{
    //while(liczba != 0){
    //     liczba = liczba / 10;
    //     cyfry++;
        for(; liczba != 0; cyfry++, liczba/=10);

}
    cout << "Liczba cyfr naszej liczby wynosi " << cyfry << endl;
}
