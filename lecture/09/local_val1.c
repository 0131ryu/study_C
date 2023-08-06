#include <stdio.h>

int main(void)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        int a = 0;
        a++;
        printf("for loop in No.%d, local value a is %d\n", i, a);
    }
    if (i == 3)
    {
        int a = 10;
        a++;
        printf("local value a is %d in If loop. \n", a);
    }
    return 0;
}