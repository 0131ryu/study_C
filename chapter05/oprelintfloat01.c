#include <stdio.h>

int main(void)
{
    printf("%d\n", 300 == 299.99999F); // 1
    printf("%d\n", 300 == 299.99999);  // 0

    printf("%d\n", 300 == 299.9999F);  // 0
    printf("%d\n", 300 == 300.00001F); // 1
    return 0;
}