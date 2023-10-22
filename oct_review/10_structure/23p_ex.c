#include <stdio.h>
#include <string.h>

struct contact
{
    char name[20];  // 이름
    char phone[20]; // 전화번호
    int ringtone;   // 벨소리
};

int main(void)
{
    struct contact ct1 = {"seoul", "01012345678", 1};
    struct contact ct2 = ct1;

    if (strcmp(ct1.name, ct2.name) == 0 && strcmp(ct1.phone, ct2.phone) == 0 && ct1.ringtone == ct2.ringtone)
        printf("ct1 and ct2 are same.");
    else
        printf("ct1 and ct2 are different.");
    return 0;
}