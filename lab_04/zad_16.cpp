#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const int size = 20;
    char array[size] = "Jan";
    char tmp[size];
    // strcpy(tmp, array);
    {
        int i = 0;
        for(; array[i] != '\0'; ++i){
            tmp[i] = array[i];
        }
        tmp[i] = '\0';
        cout << tmp << "\n";
    }

    // strncpy(tmp, array, size);

    {
        int i = 0;
        for(; array[i] != '\0' && i < size; ++i){
            tmp[i] = array[i];
        }
        tmp[i] = '\0';
        cout << tmp << "\n";
    }


    return 0;
}
