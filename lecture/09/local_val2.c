#include <stdio.h>

int main(void)
{
    int val = 0;
    if (1)
    {
        int val = 0;
        val += 10;
        printf("%d\n", val);
    }
    printf("%d\n", val);
    return 0;
}