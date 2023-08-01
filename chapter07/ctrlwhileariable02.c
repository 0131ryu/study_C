#include <stdio.h>

int main(void)
{
    char ch = 0;
    while ((ch = getchar()) != '\n')
    {
        int nIndex = 0;
        printf("%02d\t%c\n", nIndex, ch);

        ++nIndex;
    }
    return 0;
}