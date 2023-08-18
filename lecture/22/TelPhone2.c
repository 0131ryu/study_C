#include <stdio.h>

struct person
{
    char name[20];
    char phone[20];
};

int main(void)
{
    struct person pArray[3];
    int i;

    for (i = 0; i < 3; ++i)
    {
        printf("Write name, phone-number : ");
        scanf("%s %s", pArray[i].name, pArray[i].phone);
    }
    printf("This is Result. \n");
    for (i = 0; i < 3; ++i)
    {
        printf("name : %s ", pArray[i].name);
        printf("phone-number : %s \n", pArray[i].phone);
    }
    return 0;
}