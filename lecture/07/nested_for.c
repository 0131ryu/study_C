#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        printf("current i is %d \n", i);
        for (j = 0; j < 2; j++)
        {
            printf("current j is %d \n", j);
        }
    }
    return 0;
}