#include <stdio.h>

struct simple
{
    int data1;
    int data2;
};

void show(struct simple ts)
{
    printf("data1: %d, data2 : %d\n", ts.data1, ts.data2);
};

struct simple getdata(void)
{
    struct simple temp;
    scanf("%d %d", &temp.data1, &temp.data2);
    return temp;
};

int main()
{
    struct simple s = getdata();
    show(s);

    return 0;
}