#include <iostream>

using namespace std;

int main()
{
    int temp, pl = 0, dl = 1, n = 20;
    for(int i = 0;i < n ;i++){
        cout << pl << " ";
        temp = dl;
        dl = pl + dl;
        pl = temp;
    }
    return 0;
}
