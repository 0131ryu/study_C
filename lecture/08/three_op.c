#include <stdio.h>

int main(void)
{
    int x;
    char ch;

    printf("Write int : ");
    scanf("%d", &x);

    ch = (x < 0) ? '-' : '+';

    (ch == '+') ? printf("A positive number \n") : printf("A negative number \n");
    printf("absolute value : %d \n", (x < 0) ? -1 * x : x);
    return 0;
}