#include <iostream>
using namespace std;
int main() {
    int n = 100;
    bool prime;
    for(int i=2;i<n;i++){
        prime=true;
        for(int j=2;j<=i/2;j++)
            if(i%j==0)
                prime=false;
        if(prime)
            printf("%d ",i);
    }
    return 0;
}
