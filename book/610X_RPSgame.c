#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int com, user;

    srand((unsigned)time(NULL));

    printf("scissors0 rock1 paper2 choice : ");
    scanf("%d", &user);
    com = rand() % 3;
    printf("com = %d, user = %d\n", com, user);

    if (com == user)
        printf("It's a tie!\n");
    else if ((com == 0 && user == 1) || (com == 1 && user == 2) || (com == 2 && user == 0))
        printf("User wins!\n");
    else
        printf("Computer wins!\n");

    return 0;
}