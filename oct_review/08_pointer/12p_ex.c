#include <stdio.h>

int main(void)
{
    char ch;
    int in;
    double db;

    printf("ch's pointer : %u\n", &ch); // 6422303
    printf("in's pointer : %u\n", &in); // 6422296
    printf("db's pointer : %u\n", &db); // 6422288

    return 0;
}