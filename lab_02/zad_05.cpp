#include <iostream>

using namespace std;

int main()
{
    float a1, b1, a2, b2;
    b1 = 1;
    b2 = 2;
    a1 = 3;
    a2 = 4;
    cout << ((a2 < b1)||(a1 > b2) ? "no ":"") << "intersection" << endl;



    return 0;
}
