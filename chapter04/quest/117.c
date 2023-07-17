#include <stdio.h>

int main(void)
{
    int a, b;
    printf("Write two int : ");
    scanf("%d%d", &a, &b);

    printf("AVG : %.2f\n", (a + b) / 2.0);
    return 0;
}