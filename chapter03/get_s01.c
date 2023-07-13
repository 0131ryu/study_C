#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char szName[32] = {0};

    printf("Put your name : ");
    gets_s(szName, sizeof(szName));

    printf("That's your name is ");
    puts(szName);
    puts(" is your name.");
    return 0;
}