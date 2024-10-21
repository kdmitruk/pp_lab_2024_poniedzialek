#include <iostream>

using namespace std;

int main()
{
    float x, sum=0;
    do{
        cin>>x;
        sum+=x;
    }while(sum<100);
    cout<<sum-100;
    return 0;
}
