#include <iostream>
#include<cmath>
using namespace std;

int main()
{
    u_int64_t t1= 2250 , t2;
    int r1 = 1971, r2 = 2024;
    t2= t1 * pow(2,(r2-r1)/2);
    cout<< t2<<endl;
    return 0;
}
