#include <stdio.h>

int main()
{
    int state;

    // 파일의 개방
    FILE *file = fopen("Test.txt", "wt");
    if (file == NULL)
    {
        printf("file open error!\n");
        return 1;
    }

    // 입출력

    // 파일의 종결
    state = fclose(file);
    if (state != 0)
    {
        printf("file close error\n");
        return 1;
    }
    return 0;
}