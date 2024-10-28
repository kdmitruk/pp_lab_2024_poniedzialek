#include <iostream>

using namespace std;

int main()
{
    const int n=20;
    int arr[n];
    srand(time(0));
    for(int i=0;i<n;i++)
        arr[i]=rand()%100+1;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;

    int temp;
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i - 1; j++){
//            if(arr[j] > arr[j+1]){
            if(arr[j] % 2 != 0){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                //swap(arr[j], arr[j+1]);
            }
        }
    }

    for(int i=0;i<n;i++)
        cout<<arr[i]<<' ';
    cout<<endl;
}
