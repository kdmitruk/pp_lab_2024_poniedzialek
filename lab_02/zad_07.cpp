#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    float c;
    cout << "Podaj a i b: \n";
    cin >> a >> b;
    c = sqrt(pow(b, 2) + pow(a, 2));
    //c = hypot(a, b);
    cout << c << endl;
    return 0;
}
