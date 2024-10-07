#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float m0, mr, v, l, roznica;
    cout << "Podaj mase poczatkowa: " << endl;
    cin >> m0;
    cout << "Podaj predkosc: " << endl;
    cin >> v;
    l=sqrt(1-pow(v,2)/pow(299792458.f,2));
    mr = m0/l;
    roznica = mr-m0;
    cout << roznica << endl;
    return 0;
}
