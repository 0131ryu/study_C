#include <stdio.h>

void fct(void);

int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
        fct();

    return 0;
}

void fct(void)
{
    // int val = 0;
    static int val = 0; // 메모리 공간에 계속 남아있음
    val++;
    printf("%d", val); // 11111(int만) 12345(static int)
}