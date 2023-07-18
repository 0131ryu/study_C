#include <stdio.h>

int main(void)
{
    int nInput = 0;
    scanf("%d\n", &nInput);

    int nHours = nInput / 60 / 60;
    int nMinutes = nInput % 3600 / 60; //% 60 % 60 / 60;이면 0이 나옴
    int nSeconds = nInput % 60;

    printf("case 1 : %d is %d hours %d minutes %d seconds \n", nInput, nHours, nMinutes, nSeconds);
    printf("case 2 : %d is %d hours %d minutes %d seconds",
           nInput, nInput / 3600, nInput % 3600 / 60, nInput % 60);
    return 0;
}