#include <stdio.h>

int main(void)
{
    char str1[5] = "abcd";
    char *str2 = "ABCD";

    printf("%s \n", str1);
    printf("%s \n", str2);

    str1[0] = 'x'; //*(str1+0) = 'x'와 같은 문장
    // str2[0] = 'x'; //Error = 상수여서 변경 불가능
    //*(str2 + 0) = 'x' == str2[0]

    printf("%s \n", str1);
    printf("%s \n", str2);
    return 0;
}