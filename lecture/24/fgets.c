#include <stdio.h>

int main(void)
{
    int state;
    char buf[30];

    // 파일의 개방
    FILE *file = fopen("Test.txt", "rt");
    if (file == NULL)
    {
        printf("file open error!\n");
        return 1;
    }

    // fputs함수의 활용1
    fputs("Write Data : ", stdout);
    fgets(buf, sizeof(buf), stdin);
    puts(buf);

    // fputs함수의 활용2
    fgets(buf, sizeof(buf), file);
    puts(buf);

    // 파일의 종결
    state = fclose(file);
    if (state != 0)
    {
        printf("file close error!\n");
        return 1;
    }
    return 0;
}