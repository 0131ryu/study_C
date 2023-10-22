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
    struct contact ct1 = {"seoul", "01012345678", 0};
    struct contact ct2 = ct1;

    printf("Making init from ct1 is ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

    ct2 = ct; // 구조체 변수를 대입할 수 있음
    printf("Put ct after ct2 = %s, %s, %d\n", ct2.name, ct2.phone, ct2.ringtone);

    return 0;
}