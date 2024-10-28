#include <iostream>

using namespace std;

int main()
{
    const int n=5;
    const int m=4;
    int arr1[n]={1,2,3,4,5};
    int arr2[m]={6,7,8,9};
    int arr3[n+m];
    for(int i=0; i<n; i++){
        arr3[i]=arr1[i];
    }
    for(int i=0; i<m; i++){
        arr3[i+n]=arr2[i];
    }
    for(int i=0; i<n+m; i++){
        cout<<arr3[i]<<endl;
    }
    return 0;
}
