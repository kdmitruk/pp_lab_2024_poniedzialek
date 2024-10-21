#include <iostream>
#include <iomanip>
using namespace std;

// int main()
// {

//     for(int i = 1; i <= 10; ++i){
//         for(int j = 1;j <= i; ++j){
//             std::cout << std::setw(3) << i * j << " ";
//         }
//         std::cout << "\n";
//     }

//     return 0;
// }

int main()
{

    for(int i = 1; i <= 10; ++i){
        for(int j = 1;j < i; ++j) std::cout << "    ";
        for(int j = i;j <= 10; ++j){
            std::cout << std::setw(3) << i * j << " ";
        }
        std::cout << "\n";
    }

    return 0;
}
