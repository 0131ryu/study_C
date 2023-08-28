#include <stdio.h>

int main()
{
    int num1, num2, max;

    printf("Please enter two numbers : ");
    scanf("%d %d", &num1, &num2);

    max = (num1 > num2) ? num1 : num2;
    printf("The large number is %d.\n", max);
    printf("The absolute value of num2 is %d\n", (num2 < 0) ? -num2 : num2); // 절대값
    printf("num1 = %d\n", num1);
    (num1 % 2 == 0) ? printf("An even number") : printf("An odd number");

    return 0;
}