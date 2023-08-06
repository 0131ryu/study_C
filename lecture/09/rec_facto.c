#include <stdio.h>

int f(int n);

int main(void)
{
    int val;
    int result;

    printf("Write int val : ");
    scanf("%d", &val);
    if (val < 0)
    {
        printf("You must enter at least 0. \n");
        return 1;
    }
    result = f(val); // factorial 계산
    printf("Result %d! : %d \n", val, result);
    return 0;
}

int f(int n)
{
    if (n == 0)
        return 1; // n이 0이면 1 반환
    else
        return n * f(n - 1);
}