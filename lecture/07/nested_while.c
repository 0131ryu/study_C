#include <stdio.h>

int main(void)
{
    int i = 0, j = 0;

    while (i < 3)
    {
        printf("*** current i value is %d. \n", i);
        while (j < 2)
        {
            printf("current j value is %d \n", j);
            j++;
        }
        i++;
        j = 0;
    }
    return 0;
}