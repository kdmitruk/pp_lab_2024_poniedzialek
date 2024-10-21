//Zmodyfikuj program aby pobierał liczbę całkowitą (także ujemną) i
//wyświetlał wszystkie liczby całkowite z zakresu domkniętego [x, 0] lub [0, x].
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n< 0){
        for(int i = n ; i <=0 ; i++){
            cout<<i<<endl;
        }

    } else{
        for( int i = 0 ; i <=n ; i++){
            cout<<i<<endl;

        }

    }

    return 0;
}
