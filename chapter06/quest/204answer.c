#include <stdio.h>

int main(void)
{
    int nFree = 1000, nAge = 0;
    double nRate = 0.0;

    scanf("%d", &nAge);
    if (nAge < 14)
    {
        if (nAge < 4)
        {
            nRate = 0.0;
        }
        else
        {
            nRate = 0.5;
        }
    }
    else
    {
        if (nAge < 20)
        {
            nRate = 0.75;
        }
        else
        {
            nRate = 1.0;
        }
    }

    printf("Result : %d\n", (int)(nFree * nRate));
    return 0;
}