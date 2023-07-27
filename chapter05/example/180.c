#include <stdio.h>

void main()
{
    int nResult, w = 0, x = -1, y = -1, z = 1;
    nResult = w++ || x++ && ++y || ++z;
    printf("%d %d %d %d %d\n", w, x, y, z, nResult);
    // 1 0 0 2 1 (nResult는 1이 나옴)
}