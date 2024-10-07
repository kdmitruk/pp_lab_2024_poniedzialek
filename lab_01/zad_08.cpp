#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b >> c;
    //float avg=(float)(a+b+c)/3;
    //float avg=static_cast<float>(a+b+c)/3;
    float avg=(a+b+c)/3.0f;
    cout << avg << endl;
    return 0;
}
