#include <stdio.h>
#include <conio.h> //_getch() �Լ��� ����ϱ� ����

int main(void)
{
    char ch = 0;
    printf("�ƹ� Ű�� ������ �������� �Ѿ�ϴ�.. \n");
    ch = _getch(); // �ϳ��� �Է��ϸ� �Է��� ���� ��� ��ȯ

    printf("�Է��� Ű��  ");
    putchar(ch);
    printf("�Դϴ�.\n");
    return 0;
}