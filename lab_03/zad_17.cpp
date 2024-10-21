#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a=348, b=192, c, nww=a*b;
    while(b!=0){
        c=b;
        b=(a%b);
        a=c;
    }
    cout<<"NWD: "<<a<<endl;
    cout<<"NWW: "<<nww/a<<endl;
    return 0;
}
