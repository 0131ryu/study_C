#include <stdio.h>
#include <string.h>

#define STR_SIZE 20

typedef struct contact
{
    char name[STR_SIZE];
    char phone[STR_SIZE];
    int ringtone;
} CONTACT;

int main(void)
{
    CONTACT arr[] = {
        // 초기화된 배열
        {"a", "01011111111", 0},
        {"b", "01022222222", 1},
        {"c", "01033333333", 2},
        {"d", "01044444444", 9},
        {"e", "01055555555", 5},
        {"f", "01066666666", 7},
        {"g", "01077777777", 3},
    };

    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    char name[STR_SIZE];
    int index;

    printf("name? ");
    scanf("%s", name);

    index = -1; // 이름을 찾을 수 없으면 -1
    for (i = 0; i < size; i++)
    {
        if (strcmp(arr[i].name, name) == 0) // 문자열 비교
        {
            index = i;
            break;
        }
    }
    if (index >= 0)
    {
        printf("%s's phoneNumber : %s\n", arr[index].name, arr[index].phone);
    }
    else
    {
        printf("Can't find phoneNumber.\n");
    }
    return 0;
}