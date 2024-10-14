#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Podaj a: " << endl;
    cin >> a;
    a++;
    cout << "Podaj b: " << endl;
    cin >> b;
    b++;
    int c = (a * b);
    cout << "Iloraz wynosi: " << --c;

    return 0;
}
