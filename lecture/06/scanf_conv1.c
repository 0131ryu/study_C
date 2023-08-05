#include <stdio.h>

int main(void)
{
    int i, j, k;
    printf("Write 3 numbers : ");
    scanf("%d %o %x", &i, &j, &k);

    printf("Output from Input : ");
    printf("%d %d %d\n", i, j, k); // 10 8 16

    return 0;
}