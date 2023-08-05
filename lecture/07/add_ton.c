#include <stdio.h>

int main(void)
{
    int total = 0;
    int i, n;

    printf("Add Result from 0 and n, what is n? ");
    scanf("%d", &n);

    for (i = 0; i < n + 1; i++)
    {
        total += i;
    }
    printf("Result from 0 and %d add : %d \n", n, total);
    return 0;
}