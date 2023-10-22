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
    struct contact ct = {"test", "01012341234", 0};
    struct contact ct1 = {0}, ct2 = {0};

    ct.ringtone = 5;
    strcpy(ct.phone, "01011122233");
    printf("name : %s\n", ct.name);
    printf("phone number : %s\n", ct.phone);
    printf("ringtone : %d\n", ct.ringtone);

    strcpy(ct1.name, "seoul");
    strcpy(ct1.phone, "01012345678");
    ct1.ringtone = 1;
    printf("name : %s\n", ct1.name);
    printf("phone number : %s\n", ct1.phone);
    printf("ringtone : %d\n", ct1.ringtone);

    strcpy(ct2.name, "incheon");
    strcpy(ct2.phone, "01077778888");
    ct2.ringtone = 2;
    printf("name : %s\n", ct2.name);
    printf("phone number : %s\n", ct2.phone);
    printf("ringtone : %d\n", ct2.ringtone);

    return 0;
}