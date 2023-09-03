#include <stdio.h>

void selection_sort(int *pd, int size)
{
    int min, j, k, temp;

    for (k = 0; k < size; k++)
    {
        min = k;
        for (j = k + 1; j < size; j++)
        {
            if (pd[j] < pd[min])
                min = j;
        }
        temp = pd[k];
        pd[k] = pd[min];
        pd[min] = temp;
    }
}

int main()
{
    int data[9] = {2, 7, 3, 5, 9, 8, 6, 1, 4}, k;

    selection_sort(data, 9);
    for (k = 0; k < 9; k++)
        printf("%d ", data[k]);
    return 0;
}