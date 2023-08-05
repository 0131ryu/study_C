#include <stdio.h>

int main(void)
{
    float f;
    double d;

    printf("Write 2 float or double : ");
    scanf("%f %le", &f, &d);

    printf("Output from Input : ");
    printf("%f %e \n", f, d);
    return 0;
}