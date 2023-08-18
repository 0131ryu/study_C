#include <stdio.h>

enum color
{
    RED = 1,
    GREEN = 3,
    BLUE = 5
};

int main()
{
    enum color c1 = RED;
    enum color c2 = GREEN;
    enum color c3 = BLUE;

    printf("show enum value : %d, %d, %d\n", c1, c2, c3);   // 1 3 5
    printf("show value : %d, %d, %d \n", RED, GREEN, BLUE); // 1 3 5

    return 0;
}