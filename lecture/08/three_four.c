#include <stdio.h>

int main(void)
{
    int i;

    for (i = 1; i < 100; i++)
    {
        if (i % 3 == 0 && i % 4 == 0)
        {
            printf("3 multiple and 4 multiple : %d \n", i);
        }
        return 0;
    }
}