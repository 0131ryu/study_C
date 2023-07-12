#include <stdio.h>
#include <float.h> //DBL_MIN, MAX와 FLT_MIN, MAX 사용 시 선언

int main(void)
{
    double dData = 123.456;

    printf("%f\n", dData);
    // DBL_MIN : Double형의 양수 최솟값, DBL_MAX : Double형의 양수 최댓값
    // FLT_MIN : float형의 양수 최솟값, FLT_MAX : float형의 양수 최댓값
    printf("%E - %E\n", DBL_MIN, DBL_MAX);
    return 0;
}