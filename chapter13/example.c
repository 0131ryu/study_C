#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct USERDATA
{
    unsigned int nHeight;
    char szName[12];
    char szPhone[12];
    unsigned char sex;
} USERDATA;

int main(void)
{
    USERDATA aa;
    a.nHeight = 180;
    strcpy_s(a.szName, sizeof(a.szName), "Hosung");
    strcpy_s(a.szPhone, sizeof(a.szPhone), "1234-1234");
    a.sex = 'M';

    char buffer[sizeof(USERDATA)];
    USERDATA *pData = (USERDATA *)buffer;
    pData->nHeight = 180;
    strcpy_s(pData->szName, sizeof(pData->szName), "Hosung");
    strcpy_s(pData->szPhone, sizeof(pData->szPhone), "1234-1234");
    pData->sex = 'M';
    return 0;
}