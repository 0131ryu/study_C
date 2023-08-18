#include <stdio.h>

struct simple
{
    int data1;
    int data2;
};

// struct simpe ts = s;
void show(struct simple ts) // call-by-value
{
    printf("data1 : %d, data2 : %d\n", ts.data1, ts.data2);
}

void swap(struct simple *ps) // call-by-reference
{
    int temp;
    temp = ps->data1;
    ps->data1 = ps->data2;
    ps->data2 = temp;
}

int main()
{
    struct simple s = {1, 2};

    show(s);  // s의 멤버 출력
    swap(&s); // s의 멤버 data1, data2의 값 변경
    show(s);  // s의 변경된 멤버 출력

    return 0;
}