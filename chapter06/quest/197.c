#include <stdio.h>

int main(void)
{
    int nCost = 1000;
    int nAge = 0;

    scanf("%d", &nAge);

    if (nAge < 20)
    {
        if (nAge >= 14 && nAge <= 19)
        {
            nCost = nCost * 75 / 100;
        }
        else if (nAge >= 4 && nAge <= 13)
        {
            nCost = nCost * 50 / 100;
        }
        else if (nAge >= 0 && nAge <= 3)
        {
            nCost = nCost * 0;
        }
    }
    printf("%d", nCost);
    return 0;
}