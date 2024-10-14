#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Podaj Liczbę A" << endl;
    cin >> a;
    cout << "Podaj Liczbę B" << endl;
    cin >> b;
    cout << "Podaj Liczbę C" << endl;
    cin >> c;
    // if(a + b > c && a + c > b && b + c > a){
    if(a + b <= c || a + c <= b || b + c <= a){
        cout << "Nie mozna zrobić trójkąta" << endl;
    }else{
        cout << "Można zrobić trójkąt" << endl;

    }
    return 0;
}
