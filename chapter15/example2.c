#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 캐릭터의 움직임을 나타내는 상수
typedef enum ACTION
{
    MOVE = 100,
    MOVE_EX = 110,
    JUMP = 200,
    ATTACK = 300
} ACTION;

// ex
typedef void(__cdecl *PROCDATA)(int);

void TestFunc(int nParam){

};

int main(void)
{
    // ACTION act;
    PROCDATA pfData = TestFunc;
    return 0;
}