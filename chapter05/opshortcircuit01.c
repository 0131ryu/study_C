#include <stdio.h>

int main(void)
{
    int nAge = 0, nHeight = 0;

    printf("Write your age : ");
    scanf("%d", &nAge);
    printf("Write your height : ");
    scanf("%d", &nHeight);

    printf("Result : %d (1:True, 0:False)\n",
           nAge >= 20 && nAge <= 30 && nHeight >= 150);
    return 0;
}