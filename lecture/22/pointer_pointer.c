#include <stdio.h>

struct simple
{
    int data1;
    int data2;
};

int main()
{
    struct simple s = {1, 2};

    // 서로 값이 일치함
    printf("address1 : %d\n", &s);
    printf("address2 : %d\n", &(s.data1));
    return 0;
}