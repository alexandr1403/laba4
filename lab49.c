#include <stdio.h>
void Temperatures(double Temp_F)
{
    const double K = 273.16;
    const double C = 5.0/9.0;
    const double F = 32.0;
    double Temp_C = C*(Temp_F-F);
    double Temp_K = Temp_C+K;
    
    printf("Температура = %.2f F = %.2f C = %.2f K\n", Temp_F, Temp_C, Temp_K);

}

int main()
{
    double Temp_F;
    printf("Введите значение температуры в градусах Фаренгейта: ");
    while (scanf("%lf", &Temp_F) == 1)
    {
        Temperatures(Temp_F);
        printf("Введите значение температуры в градусах Фаренгейта: ");
        //scanf("%lf", &Temp_F);
    }
    printf("Вы ввели не число\n");
    
    return 0;

}