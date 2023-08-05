#include <stdio.h>

int Add(int a, int b);
int Input(void);
void Result_Print(int val);
void Intro(void);

int main(void)
{
    int a, b;
    int result;
    Intro();     // 시작을 알림
    a = Input(); // 값을 입력 받음
    b = Input(); // 값을 입력 받음

    result = Add(a, b);
    Result_Print(result);

    return 0;
}

int Add(int i, int j)
{
    return i + j;
}

int Input(void)
{
    int input;
    scanf("%d", &input);
    return input;
}

void Result_Print(int val)
{
    printf("Result of Add : %d \n", val);
    printf("****** END ****** \n");
}

void Intro(void)
{
    printf("****** START ****** \n");
    printf("Write two int numbers : ");
}