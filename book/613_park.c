#include <stdio.h>

int main()
{
    int ticket;

    printf("Which package would you like to purchase, number 1, 2 or 3? : ");
    scanf("%d", &ticket);

    switch (ticket)
    {
    case 1:
        printf("Tickets for the dolphin show\n");
        break;
    case 2:
        printf("A ticket for ten rides");
        break;
    default:
        printf("An admission ticket\n");
        break;
    }
    return 0;
}