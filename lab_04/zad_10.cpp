//Napisz program, który dla tablicy liczb całkowitych wypisze z niej wartość najbliższą
//średniej arytmetycznej wszystkich wartości z tej tablicy.
#include <iostream>
#include <cfloat>
#include <cmath>

using namespace std;

int main()
{
    float avg = 0;
    const int size=5;
    int arr[]={6,8,3,4,5};
    for(int i=0;i<size;i++){
        avg += arr[i];
    }
    avg/=size;
    float diff;
    float min_diff = FLT_MAX;
    int index;
    for(int i=0;i<size;i++){
        diff = fabs(arr[i] - avg);
        if(min_diff > diff){
            min_diff = diff;
            index = i;
        }
    }
    cout << avg << " " << index << " " << arr[index] << endl;

    return 0;
}
