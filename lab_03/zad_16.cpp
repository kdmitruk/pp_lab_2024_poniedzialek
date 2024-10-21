#include <iostream>
#include <cmath>
using namespace std;
int main() {
    unsigned int n;
    std::cin >> n;
    double square1=n/2;
    double square2;
    double tmp;
    int i=0;
    do{
        square2=square1;
        tmp = n/square1;
        square1 = (square1 + tmp)/2;
        i++;

    }while(abs(square1-square2)>0.003);
    cout<<floor(square1)<<' '<<i<<endl;
    return 0;
}
