#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    const int rozmiar = 20;
    char napis[rozmiar];
    // cin.get(napis, rozmiar);
    scanf("%[^\n]s", napis);
    // cout << napis;
    for(int i = 0;napis[i] != '\0'; i++){
        cout << napis[i];
    }
    return 0;
}
