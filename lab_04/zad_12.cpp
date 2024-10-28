#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    const int n=20;
    int shift = -5;
    int arr[n];
    int tmp[n];
    srand(time(0));
    for(int i=0;i<n;i++)
        arr[i]=rand()%10+1;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    for (int i = 0; i < n; ++i) {
        int idx = (i + shift) % n;
        if (idx < 0) idx += n;
        tmp[idx] = arr[i];
    }
    for (int i = 0; i < n; ++i)
        arr[i] = tmp[i];
    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';

    return 0;
}
