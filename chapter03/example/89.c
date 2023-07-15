#include <stdio.h>

int main(void)
{
    int nAge = 0;
    char nName[32] = {0};

    printf("Write Your age : ");
    scanf("%d%*c", &nAge);
    printf("Write Your name : ");
    gets(nName);
    printf("Your age is %d and Your name is %s", nAge, nName);
    return 0;
}