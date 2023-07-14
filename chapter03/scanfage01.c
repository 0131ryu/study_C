#include <stdio.h>

int main(void)
{
    char szName[32] = {0};
    int nAge = 0;

    printf("Write Your age. : ");
    scanf("%d", &nAge);

    printf("Write Your name : ");
    gets(szName);

    printf("%d, %s\n", nAge, szName);
    return 0;
}