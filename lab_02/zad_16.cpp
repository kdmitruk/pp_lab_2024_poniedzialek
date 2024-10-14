#include <iostream>

using namespace std;

int main()
{
    char znak;
    cout << "Podaj znak: " << endl;
    cin >> znak;
    if(znak>='a' && znak<='z'){
        cout << "jest to mała litera";
    } else{
        cout << "nie jest to mała litera";
    }
    return 0;
}
