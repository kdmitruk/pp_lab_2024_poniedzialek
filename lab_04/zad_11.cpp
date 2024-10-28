#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
int main() {
    const int n=10;
    int arr[n];
    srand(time(0));
    for(int i=0;i<n;i++)
        arr[i]=rand()%10+1;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    int tmp= arr[n-1];
    for(int i=n-1;i>0;i--)
        arr[i]=arr[i-1];
    arr[0]=tmp;

    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    return 0;
}
