#include <iostream>

int main()
{
    int n, num, sum = 0;
    float avg;
    std::cin >> n;
    for(int i = 0; i < n; i++) {
        std::cin >> num;
        sum += num;
    }
    avg = sum/(float)n;
    std::cout << avg;
    return 0;
}
