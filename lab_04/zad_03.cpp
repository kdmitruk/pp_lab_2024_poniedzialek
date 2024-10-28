#include <iostream>

using namespace std;

int main()
{
    const int size=5;
    int arr1[size]={1,2,3,4,5};
    /*int arr2[size];
    for(int i=0; i<size; i++){
        arr2[size-1-i]=arr1[i];
    }
    for(int j=0; j<size; j++){
        arr1[j]=arr2[j];
        cout<<arr1[j]<<endl;
    }*/
    int t;
    for(int i=0; i<size/2; i++){
        t=arr1[i];
        arr1[i]=arr1[size-1-i];
        arr1[size-1-i]=t;
    }
    for(int i=0; i<size; i++){
        cout<<arr1[i]<<endl;
    }
    return 0;
}
