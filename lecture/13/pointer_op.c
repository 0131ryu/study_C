#include <stdio.h>

int main(void)
{
    int *ptr1 = 0; // 0 = null(아무것도 안 가리킴)
    char *ptr2 = 0;
    double *ptr3 = 0;

    printf("%d case, %d case, %d case\n", ptr1++, ptr2++, ptr3++); // 0 case 0 case 0 case
    printf("%d case, %d case, %d case \n", ptr1, ptr2, ptr3);      // 4 case, 1 case, 8 case
    printf("%d case, %d case, %d case \n", ptr1--, ptr2--, ptr3--);
    printf("%d case, %d case, %d case \n", ptr1, ptr2, ptr3);
    return 0;
}