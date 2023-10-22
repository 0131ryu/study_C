#include <stdio.h>

struct complex
{
    double re; // real part
    double im; // image part
};

typedef struct complex complex;
void add(complex *a, complex *b, complex *c)
{
    a->re = b->re + c->re;
    a->im = b->im + c->im;

    printf("a->re : %f\n", a->re);
    printf("a->im : %f\n", a->im);
}

int main(void)
{ // main함수에서 complex 구조체 변수를 선언하고 초기화
    complex a, b, c;

    a.re = 0;
    a.im = 0;
    b.re = 1.0;
    b.im = 2.0;
    c.re = 2.0;
    c.im = 3.0;

    add(&a, &b, &c); // add함수에 인자로 각각 전달
    return 0;
}