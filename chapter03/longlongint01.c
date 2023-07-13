#include <stdio.h>

int main(void)
{
    long long int lldData = 4294967295LL;

    // 64비트 정보를 32비트 형식으로 출력
    printf("%d\n", lldData); //-1
    printf("%u\n", lldData); // 4294967295

    // 32비트로 표현할 수 없는 범위의 정보 출력(정상적인 값x)
    printf("%u\n", lldData + 1); // 0
    printf("%u\n", lldData + 2); // 1
    printf("%u\n", lldData + 3); // 2

    // 64비트 정보를 64비트 형식문자(%lld)로 출력
    printf("%lld\n", lldData + 1); // 4294967296
    printf("%lld\n", lldData + 2); // 4294967297
    printf("%lld\n", lldData + 3); // 4294967298
    return 0;
}