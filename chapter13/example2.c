#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
    char ch;
    int nData;
} USERDATA;

int main(void)
{
    USERDATA a;
    a.ch = 'A';
    a.nData = 300;

    printf("%d\n", sizeof(USERDATA)); // 8
    return 0;
}