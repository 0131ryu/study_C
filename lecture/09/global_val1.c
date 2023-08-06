#include <stdio.h>

int val; // 전역변수

void add(int num);

int main(void)
{
    printf("val : %d \n", val); // 0

    add(3);
    printf("val : %d \n", val); // 3

    val++;
    printf("val : %d \n", val); // 4
    return 0;
}

void add(int n)
{
    val += n;
}