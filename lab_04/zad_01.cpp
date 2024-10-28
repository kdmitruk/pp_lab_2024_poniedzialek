//Napisz program, który utworzy 5-elementową tablicę liczb całkowitych i
//zapisze w jej komórkach 5 liczb podanych ze standardowego wejścia,
//a następnie je wyświetli.

#include <iostream>

using namespace std;

int main()
{
    const int SIZE =5;
    int arr[SIZE];
    for(int i = 0 ; i <SIZE ; i++){
        cin>>arr[i];

    }
    for(int i = 0; i<SIZE ; i++)  {
        cout<<arr[i]<<" ";
    }

    cout<<endl;


    return 0;
}
