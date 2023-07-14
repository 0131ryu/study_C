#include <stdio.h>

int main(void)
{
    int x = 0, y = 0;

    printf("Put the x and y : ");

    //%d와 %d 사이에 공백이 없다는 점에서 주의해야 함
    scanf("%d%d", &x, &y);

    printf("The result is %d.\n", x + y);
    return 0;
}