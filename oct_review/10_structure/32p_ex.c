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
    CONTACT ct = {"seoul", "01011112222", 0};
    CONTACT *p = &ct;

    p->ringtone = 5;
    strcpy(p->phone, "01011112233");
    printf("name : %s\n", p->name);
    printf("phone : %s\n", p->phone);
    printf("ringtone : %d\n", p->ringtone);

    return 0;
}