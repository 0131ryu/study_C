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
    if (opt == 2)
    {
        result = val1 - val2;
    }
    if (opt == 3)
    {
        result = val1 * val2;
    }
    if (opt == 4)
    {
        result = val1 / val2;
    }
    printf("result : %f \n", result);
    return 0;
}