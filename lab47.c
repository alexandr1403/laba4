#include <stdio.h>

void cub(double n)
{
    printf("n в кубе = %f\n", n * n * n);
}

int main()
{
    double a;
    scanf("%lf", &a);
    cub(a);
    return 0;
}