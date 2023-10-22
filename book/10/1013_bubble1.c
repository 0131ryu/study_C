#include <stdio.h>

#define MAX 7
int main()
{
    int data[MAX] = {2, 7, 3, 5, 4, 1, 6};
    int j, k, temp;

    for (k = 0; k < MAX; k++) // for k - 카드 수만큼 반복
    {
        for (j = 0; j < MAX; j++) // for j - 두 수 비교
        {
            if (data[j - 1] > data[j]) // if 앞에 수가 크면
            {
                temp = data[j - 1]; // 두 수 바꾸기
                data[j - 1] = data[j];
                data[j] = temp;
            }
        }
    }
    for (k = 0; k < MAX; k++)
        printf("%d", data[k]); // 배열값 출력
    return 0;
}