#include <stdio.h>

int main(void)
{
    int nInput = 0, nSelect = 0;
    scanf("%d", &nInput);

    // nInput <= 10 ? nSelect = 10 : nSelect = 20; //wrong

    nInput <= 10 ? (nSelect = 10) : (nSelect = 20);
    printf("%d\n", nSelect);
    return 0;
}