#include <stdio.h>

int main()
{
    int data[20] = {2, 7, 8, 11, 12, 17, 19, 20, 23, 26, 28, 31, 33, 37, 40, 44, 47, 52, 63, 64};
    int num, mid, min = 0, max = 19;

    printf("What's the number you're looking for? : ");
    scanf("%d", &num);

    while (max > min) // 반복문 탈출 조건
    {
        mid = (max + min) / 2;
        if (data[mid] == num)
        {
            printf("%d in Array!", mid); // 값을 찾은 경우
            break;
        }
        else if (num < data[mid])
            max = mid - 1; // 더 작은 숫자인 경우
        else
            min = mid + 1; // 더 큰 숫자인 경우
    }
    return 0;
}