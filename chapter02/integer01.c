#include <stdio.h>

int main(void)
{
    char ch = 'A';
    wchar_t wch = L'A';
    short sData = 10;
    int nData = 10;
    long lData = 10L;
    long int lnata = 10L;
    long long int llnData = 10LL;

    // unsigned 포함 시 상수 끝에 U가 붙음 long이 포함 시 L이 붙음
    unsigned char byNewData = 0;
    unsigned short sNewData = 65535U;
    unsigned int uNewData = 1U;
    unsigned long long int ullNewData = 1ULL;
    return 0;
}