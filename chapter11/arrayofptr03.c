#include <stdio.h>

int main(int argc, char *argv[])
{
    char *astrList[3] = {"Hello", "World", "String"};
    char **ppstrList = astrList;
    char ***pppstrList = &ppstrList;

    puts(ppstrList[0]); // Hello
    puts(ppstrList[1]); // World
    puts(ppstrList[2]); // String

    puts(*pppstrList[0]);           // Hello
    puts(*(*(pppstrList + 0) + 1)); // World
    return 0;
}