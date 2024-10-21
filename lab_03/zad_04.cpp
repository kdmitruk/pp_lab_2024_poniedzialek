#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, tmp, biggest_number = INT_MIN;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> tmp;
        if(biggest_number < tmp) biggest_number = tmp;
    }
    cout << biggest_number << "\n";
    return 0;
}
