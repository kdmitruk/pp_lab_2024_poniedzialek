//Napisz program, który wypełnia tablicę losowymi wartościami.
//Użyj funkcji rand() zadeklarowanej w pliku nagłówkowym <cstdlib>

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    const int SIZE = 15;
    int arr[SIZE];
    srand((time (0)));
    for(int i = 0 ; i<SIZE ; i++){
       // arr[i]= rand()%10;
        arr[i]=rand()*10.0/RAND_MAX;
    }
    for(int i = 0; i<SIZE ; i++)  {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
