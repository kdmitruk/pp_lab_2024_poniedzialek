#include <iostream>

using namespace std;

int main()
{
    int rows = 10, cols = 9;
    bool flag;
    bool newline_flag = true;
    for(int y = 0; y < rows; ++y){
        flag = newline_flag;
        for(int x = 0; x < cols; ++x){
            cout << (flag == true ? "#":"o");
            flag = !flag;
        }
        std::cout << "\n";
        newline_flag = ! newline_flag;
    }


    return 0;
}
