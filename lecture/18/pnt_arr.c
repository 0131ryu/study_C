#include <stdio.h>

void showData(int (*ptr)[4], int a)
{
    int i, j;

    printf("------------- Start Print -------------\n");

    for (i = 0; i < a; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            printf("%d ", ptr[i][j]);
            printf("\n");
        }
    }
}

int main(void)
{
    int arr1[2][4] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[3][4] = {{1}, {2}, {3}};

    showData(arr1, 2);
    showData(arr2, 3);
    return 0;
}