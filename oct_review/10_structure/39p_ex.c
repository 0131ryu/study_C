#include <stdio.h>

typedef struct point
{
    int x, y; // 점의 좌표
} POINT;

void print_point(POINT *pt)
{
    printf("(%d, %d)", pt->x, pt->y);
};

int main(void)
{
    POINT arr[] = {
        {0, 0},
        {10, 10},
        {20, 20},
        {30, 30},
        {40, 40},
    };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int i;

    for (i = 0; i < sz; i++)
    {
        print_point(&arr[i]); // 구조체 변수의 주소를 전달한다
        printf(" ");
    }
    printf("\n");
    return 0;
}
