#include <iostream>

using namespace std;

int main()
{
    float a1, b1, a2, b2;
    a1 = 1;
    b1 = 2;
    b2 = 3;
    a2 = 4;
    // cout << ((a2 < b1)||(a1 > b2) ? "no ":"") << "intersection" << endl;

    if((a2 >= b1) && (a1 <= b2)) {
        cout << "intersection" << endl;
        if(a1 > b1) cout << a1 << endl;
        else cout << b1 << endl;
        cout << (a2 < b2 ? a2 : b2) << endl;
    }else{
        cout <<"no intersection" << endl;
    }




    return 0;
}
