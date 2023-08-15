#include <stdio.h>

int main(int argc, char *argvp[])
{
    char ch = 'A';
    char *pData = &ch;
    char **ppData = &pData;
    char ***pppData = &ppData;

    printf("%c\n", ch);         // A
    printf("%c\n", *pData);     // A
    printf("%c\n", **ppData);   // A
    printf("%c\n", ***pppData); // A
    return 0;
}