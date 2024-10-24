#include <stdio.h>

void cub(double n)
{
    printf("n^3 = %f\n", n * n * n);
}

int main()
{
    double a;
    scanf("%lf", &a);
    cub(a);
    return 0;
}