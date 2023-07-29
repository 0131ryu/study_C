#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    int max = a;

    if (b > c)
    {
        if (max < b)
        {
            max = b;
        }
    }
    else
    {
        if (max < c)
        {
            max = c;
        }
    }
    printf("MAX : %d", max);
    return 0;
}