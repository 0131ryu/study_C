#include <stdio.h>

int Large_Num(int a, int b);

int main(void)
{
    printf("The larger number of 3 and 4 is %d. \n", Large_Num(3, 4));
    printf("The larger number of 7 or 2 is %d. \n", Large_Num(7, 2));

    return 0;
}

int Large_Num(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}