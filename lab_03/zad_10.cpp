#include <iostream>

using namespace std;

int main()
{
    int height;
    cout << "Podaj Wysokość Choinki" << endl;
    cin >> height;
    int space_count;
    int star_count;
    for(int i = 0; i < height ; ++i){
        space_count = height - i - 1;
        star_count = i * 2 + 1;
        for(int j = 0 ;j < space_count ; ++j){
            cout << " ";
        }
        for(int j = 0 ;j < star_count ; ++j ){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
