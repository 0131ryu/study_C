#include <stdio.h>

int main(void)
{
    int val;
    printf("Write number : ");
    scanf("%d", &val);

    if (val < 0)
    {
        printf("Input value is less 0 \n");
    }
    if (val > 0)
    {
        printf("Input value is bigger 0 \n");
    }
    if (val == 0)
    {
        printf("Input value is 0 \n");
    }
    return 0;
}