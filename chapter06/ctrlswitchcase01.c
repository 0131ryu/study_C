#include <stdio.h>

int main(void)
{
    char cOperator = 0;
    int x = 0, y = 0, nResult = 0;

    scanf("%d%c%d", &x, &cOperator, &y);

    switch (cOperator)
    {
    case '+':
        nResult = x + y;
        // 다음행으로 넘어가지 않고 switch-case 블록을 벗어남
        break;
    case '-':
        nResult = x - y;
        break;
    case '*':
        nResult = x * y;
        break;
    case '/':
        nResult = x / y;
        break;
    default:
        puts("Error : This is not find code.");
    }
    printf("Result : %d\n", nResult);
    return 0;
}