#include<stdio.h>
int main()
{
    printf("Введите целое число: ");
    int x;
    
    scanf("%d", &x);
    int d=x+10;
    // for (;x<=d;x++)
    // {
    //     //scanf("%d", &x);
    //     //x+=1;
    //     printf("%d\n", x);
    // }
    while (x < d) {
        printf("%d\n", ++x);
    }
    return 0;
}