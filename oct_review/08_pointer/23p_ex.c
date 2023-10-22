#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = &arr[0];

    for (int i = 0; i < 5; i++, p++)
    {
        printf("p= %p, ", p);    // p가 가리키는 원소가 계속 바뀜
        printf("*p = %d\n", *p); // p가 역참조하는 원소도 계속 바뀜
    }
    return 0;
}

/*
p= 0061FF04, *p = 1
p= 0061FF08, *p = 2
p= 0061FF0C, *p = 3
p= 0061FF10, *p = 4
p= 0061FF14, *p = 5
*/