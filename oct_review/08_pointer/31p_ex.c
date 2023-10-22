#include <stdio.h>

void swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main(void)
{
    int a = 3, b = 7;
    printf("a = %d, b = %d\n", a, b);

    swap(a, b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}