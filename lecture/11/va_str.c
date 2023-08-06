#include <stdio.h>

int main(void)
{
    int i;
    char ch;
    char str[6] = "Hello"; // str[5]에 \0(null) 들어감

    printf("Before change string --\n");
    printf("%s \n", str);

    for (i = 0; i < 6; i++)
        printf("%c |", str[i]);

    // 문자열 변경
    for (i = 0; i < 3; i++)
    {
        ch = str[4 - i];
        str[4 - i] = str[i];
        str[i] = ch;
    }

    printf("After change string -- \n");
    printf("%s \n", str);
    return 0;
}