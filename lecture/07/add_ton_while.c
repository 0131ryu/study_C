#include <stdio.h>

int main(void)
{
    int total = 0;
    int i, n;

    printf("Add Result from 0 and n, what is n? ");
    scanf("%d", &n);

    i = 0;
    while (i < n + 1)
    {
        total += i;
        i++;
    }
    printf("Result from 0 and %d add : %d \n", n, total);
    return 0;
}