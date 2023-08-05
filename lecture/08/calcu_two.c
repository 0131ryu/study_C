#include <stdio.h>

int main(void)
{
    int opt;
    float val1, val2;
    float result;

    printf("add1, minus2, multi3, divi4 \n");
    printf("choice ? : ");
    scanf("%d", &opt);
    printf("Write two float : ");
    scanf("%f %f", &val1, &val2);

    if (opt == 1)
    {
        result = val1 + val2;
    }
    else if (opt == 2)
    {
        result = val1 - val2;
    }
    else if (opt == 3)
    {
        result = val1 * val2;
    }
    else if (opt == 4)
    {
        result = val1 / val2;
    }

    if (opt == 1 || opt == 2 || opt == 3 || opt == 4)
    {
        printf("result : %f \n", result);
    }
    else
    {
        printf("잘못된 선택을 하셨습니다. \n");
    }

    return 0;
}