#include <stdio.h>

int val = 0; // 전역변수 val;

void fct(void);

int main(void)
{
    val = 10;
    printf("val : %d \n", val); // 10

    fct();
    printf("val : %d \n", val); // 10
    return 0;
}

void fct(void)
{
    int val = 20;
    val++;
}