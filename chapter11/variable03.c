#include <stdio.h>

int main(int argc, char *argv[])
{
    register int i = 0;
    printf("%d\n", i); // 에러 : 레지스터 변수에 &이/가 있습니다
    printf("%p\n", &i);
    return 0;
}