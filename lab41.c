#include<stdio.h>
#define MIN 60
int main()
{
    int x;
    int d;
    int r;
    printf("Введите время в минутах: ");
    scanf("%d", &x);
    while (x>0)
    {
        d=x%MIN;
        r=x/MIN;
        printf("%d минут\n%d часов\n", d, r); 
        printf("Введите время в минутах: ");
        scanf("%d", &x);
        //break;
    }
   
    return 0;

}
