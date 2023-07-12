#include <stdio.h>

// 배열은 한 개의 인스턴스가 아니라 여러 인스턴스가 모여 한 덩어리를 이룬 집합체
int main(void)
{
    char ch1 = 'A', ch2 = 'B', ch3 = 'C';
    char szData[4] = {'A', 'B', 'C'};
    char szNewData[4] = {"ABC"};
    printf(szData);    // ABC
    printf(szNewData); // ABC
    return 0;
}