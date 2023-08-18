#include <stdio.h>
#include <math.h>

struct point
{
    int x;
    int y;
};

int main(void)
{
    struct point p1, p2;
    double distance;

    fputs("first point x, y : ", stdout);
    scanf("%d %d", &p1.x, &p2.y);

    fputs("second point x, y: ", stdout);
    scanf("%d %d", &p2.x, &p2.y);

    // 두 점간 거리 계산 공식
    distance =
        sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));

    printf("this distance is %f.", distance);
    return 0;
}