#include <stdio.h>

int main(void)
{
    double dData = 123.456;
    printf("%f, %f\n", dData, -123.456); // 123.456000, -123.456000

    printf("%.1f\n", dData); // 123.5
    printf("%.2f\n", dData); // 123.46
    printf("%.3f\n", dData); // 123.456

    printf("%8d\n", 123); //     123

    printf("%12.3f\n", dData); //     123.456
    // 12는 소수점 이상, 소수점 그리고 소수점 이하 모두 포함한 자릿수
    printf("%012.3f\n", dData); // 00000123.456
    return 0;
}

// 소수점 이하의 반올림이 자동으로 이루어지므로 정확한 비교를 원하면 정수를 기반할 것