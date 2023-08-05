#include <stdio.h>

int main(void)
{
    int val;
    int i = 1;

    printf("gugudan : ");
    scanf("%d", &val);

    do
    {
        printf("%d * %d = %d\n", val, i, val * i);
        i++;
    } while (i < 10);
    return 0;
}