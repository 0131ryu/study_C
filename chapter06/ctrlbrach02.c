#include <stdio.h>

int main(void)
{
    int nAge = 0;

    printf("Write Your age : ");
    scanf("%d", &nAge);

    // if문
    if (nAge >= 20)
    {
        printf("Before change Your age, Your age is %d.\n", nAge);
        nAge = 20;
    }
    printf("Your age is %d.\n", nAge);
    return 0;
}