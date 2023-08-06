#include <stdio.h>

int main(void)
{
    int val = 0;

    {
        int val = 0;
        val += 10;
        printf("local value val in If : %d \n", val);
    }

    printf("local value val in main : %d \n", val);
    return 0;
}