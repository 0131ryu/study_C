#include <stdio.h>

typedef int INT;
typedef int *P_INT;

typedef unsigned int UINT;
typedef unsigned int *P_UNIT;

typedef unsigned char UCHAR;
typedef unsigned char *P_UCHAR;

int main(void)
{
    INT a = 10;    // int a = 10;
    P_INT pA = &a; // int * pA = &a;

    UINT b = 100;
    P_UNIT pB = &b;

    UCHAR c = 'a';
    P_UCHAR pC = &c;

    printf("%d, %d, %c\n", *pA, *pB, *pC); // 10 100 a
    return 0;
}