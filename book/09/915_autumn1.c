#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pos[26], spd[26], met, k, jul; // pos[] 가로 위치, spd[] 이동 속도
    char str[6];

    for (jul = 0; jul < 26; jul++)
    {
        pos[jul] = -24;
        spd[jul] = rand() % 10 + 3;
    }
    for (k = 0; k < 100; k++)
    {
        system("cls");
        for (jul = 0; jul < 26; jul++)
        {
            pos[jul] += spd[jul]; // 구름 위치 값 증가
            if (pos[jul] > 115)
            { // 화면에서 구름이 벗어나면 초기화
                pos[jul] = -22;
                spd[jul] = rand() % 20 + 3;
            }
            for (met = 0; met < 5; met++)
                str[met] = rand() % 9 + 64;
            str[5] = '\0';
            for (met = 0; met <= 115; met++)
            {
                if (pos[jul] == met)
                    printf("%s", str); // 구름 문자 출력
                else
                    printf(" ");
            }
            printf("\n");
        }
        system("timeout 1 > NULL");
    }
    return 0;
}