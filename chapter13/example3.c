#include <stdlib.h>
#include <string.h>

typedef union IP_ADDR
{
    int nAddress;
    short awData[2];
    unsigned char addr[4];
} IP_ADDR;

int main(void)
{
    IP_ADDR addr;
    addr.addr[0] = 192;
    addr.addr[1] = 168;
    addr.addr[2] = 0;
    addr.addr[3] = 10;
    printf("%d\n", addr.nAddress);
    return 0;
}