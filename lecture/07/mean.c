#include <stdio.h>

int main(void)
{
    float total = 0.0;
    float input = 0.0;
    int count = 0;

    for (; input >= 0.0;) // 반복문이 비어있다면 무한루프
    {
        total += input;
        printf("minus to quit : ");
        scanf("%f", &input);
        count++;
    }
    printf("now average : %f\n", total / count);
    return 0;
}