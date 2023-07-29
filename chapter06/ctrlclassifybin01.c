#include <stdio.h>

int main(void)
{
    int nInput = 0;
    char ch = 'A';

    printf("Write Your score : ");
    scanf("%d", &nInput);

    if (nInput >= 80)
    {
        if (nInput >= 90)
        {
            ch = 'A';
        }
        else
        {
            ch = 'B';
        }
    }
    else
    {
        if (nInput >= 70)
        {
            ch = 'C';
        }
        else
        {
            ch = 'D';
            if (nInput < 60)
            {
                ch = 'F';
            }
        }
    }
    printf("%c\n", ch);
    return 0;
}