#include <cstdio>
#include <cmath>

using namespace std;
/*
int main()
{
    int h_1, h_2, m_1, m_2;
    scanf("%d:%d", &h_1, &m_1);
    scanf("%d:%d", &h_2, &m_2);
    m_1 = m_1 + (60 * h_1);
    m_2 += (60 * h_2);
    int result_m = abs(m_1 - m_2);
    int result_h = result_m / 60;
    result_m = result_m % 60;
    printf("%02d:%02d", result_h, result_m);

    return 0;
}
*/
int main(){
    int h_1, result, m_1;
    scanf("%d:%d", &h_1, &m_1);
    result = m_1 + (h_1 * 60);
    scanf("%d:%d", &h_1, &m_1);
    result = abs(result - (m_1 + (h_1 * 60)));
    h_1 = result / 60;
    m_1 = result % 60;
    printf("%02d:%02d", h_1, m_1);
    return 0;
}
