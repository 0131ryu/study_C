#include <stdio.h>

int main(int argc, char *argv[])
{
    char astrList[2][12] = {"Hello", "World"};

    // 오류 : char* *pstrList = astrList;
    char(*pstrList)[12] = astrList;

    puts(pstrList[0]); // Hello
    puts(pstrList[1]); // World
    return 0;
}