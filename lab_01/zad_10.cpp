#include <iostream>

using namespace std;

int main()
{
    float n, an, sn, a1;
    cout << "Podaj n: ";
    cin >> n;
    cout << "Podaj an: ";
    cin >> an;
    cout << "Podaj sn: ";
    cin >> sn;
    a1 = 2 * sn / n - an;
    cout << a1 << endl;
}
