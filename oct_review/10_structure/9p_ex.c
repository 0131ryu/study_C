#include <stdio.h>

// 구조체 정의는 보통 함수 밖에서 써준다
struct contact
{
    char name[20];  // 이름
    char phone[20]; // 전화번호(01012345678 형식의 문자열로 저장)
    int rington;    // 벨소리(8~9 선택)
};

int main(void)
{
    printf("contact 구조체 크기 = %d\n", sizeof(struct contact)); // struct 붙여야 함

    return 0;
}

void test()
{
    struct contact c1; // 여러 함수에서 구조체 사용 가능
}