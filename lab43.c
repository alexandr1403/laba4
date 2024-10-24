#include <stdio.h>
#define WEEK 7
int main()
{
    int x;
    int d;
    int r;
    printf("Введите количество дней: ");
    scanf("%d", &x);
    while (x > 0)
    {
        d = x % WEEK;
        r = x / WEEK;
        printf("%d дней совставляют %d недели(ь) и %d дней(день)\n", x, r, d);
        printf("Введите количество дней: ");
        scanf("%d", &x);
        // break;
    }

    return 0;
}