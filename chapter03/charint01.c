#include <stdio.h>

int main(void)
{
    printf("%c\n", 'A');     // A
    printf("%c\n", 'A' + 1); // B
    printf("%c\n", 'C');     // C

    printf("%d\n", 'A');     // 65
    printf("%d\n", 'A' + 1); // 66
    printf("%d\n", 'C');     // 67

    printf("%c\n", 65);     // A
    printf("%c\n", 65 + 1); // B
    printf("%c\n", 67);     // C
    return 0;
}