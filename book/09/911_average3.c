#include <stdio.h>

#define MAX 7

int main() {
    int k, arr[MAX], sum = 0;
    double ave;

    printf("Input %d value : ", MAX);
    for(k=0; k<MAX; k++) {
        scanf("%d", &arr[k]);
        sum += arr[k];
    }
    ave = sum / MAX;
    printf("AVE = %.1lf", ave);

    return 0;
}