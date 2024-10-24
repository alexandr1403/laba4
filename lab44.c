#include <stdio.h>
#define DUIM 2.54
#define FOOT 30.48

int main()
{
    float a;
    printf("Введите высоту в сантимтетрах: ");
    scanf("%f", &a);
    float b;
    int c;
    while (a > 0)
    {
        b = a / DUIM;
        c = a / FOOT;
        printf("%f см = %d футов, %f дюймов\n", a, c, b);
        printf("Введите высоту в сантимтетрах (<=0 для выхода из программы):");
        scanf("%f", &a);
    }
    // while (a>0)
    //{
    // b=a/DUIM;
    // c=a/FOOT;
    // printf("%f см = %d футов, %f дюймов\n", a, c, b);
    // continue;
    printf("Работа завершена\n");
    // printf("Введите высоту в сантимтетрах (<=0 для выхода из программы):");
    // printf("Введите высоту в сантимтетрах (<=0 для выхода из программы):");
    // scanf("%f", &a);
    //}
    // printf("%f см = %d футов, %f дюймов\n", a, c, b);

    // printf("Введите высоту в сантимтетрах (<=0 для выхода из программы):");
    // scanf("%f", &a);

    return 0;
}