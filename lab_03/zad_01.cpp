//Napisz program, który pobierze ze standardowego wejścia liczbę całkowitą dodatnią x i
//wyświetli wszystkie liczby całkowite z jednostronnie domkniętego zakresu [0, x).




#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for( int i = 0 ; i <=n ; i++){
        cout<<i<<endl;
    }

    return 0;
}
