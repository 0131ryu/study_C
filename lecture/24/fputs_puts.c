#include <stdio.h>

int main(void)
{
    int state;

    // 파일의 개방
    FILE *file = fopen("Test.txt", "wt");
    if (file == NULL)
    {
        printf("file open error!\n");
        return 1;
    }

    // puts 함수의 활용
    puts("Don't Worry!"); // 줄바꿈을 자동으로 바꿈

    // fputs함수의 활용1
    fputs("Don't Worry!\n", stdout); // 모니터로 출력, 줄바꿈 직접 해야 함

    // fputs함수의 활용2
    fputs("Don't Worry\n", file); // 파일에 써있음

    // 파일의 종결
    state = fclose(file);
    if (state != 0)
    {
        printf("file close error!\n");
        return 1;
    }
    return 0;
}