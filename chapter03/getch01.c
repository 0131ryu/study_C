#include <stdio.h>
#include <conio.h> //_getch() 함수를 사용하기 위함

int main(void)
{
    char ch = 0;
    printf("아무 키나 누르면 다음으로 넘어갑니다.. \n");
    ch = _getch(); // 하나만 입력하면 입력한 정보 즉시 반환

    printf("입력한 키는  ");
    putchar(ch);
    printf("입니다.\n");
    return 0;
}