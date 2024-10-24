#include <stdio.h>
int main () 
{
int a, count, sum; 
count = 0; 
sum = 0; 
printf("Введите период рассчёта: ");
scanf("%d", &a);
while (count++ < a) 

sum = sum + count;
printf("sum = %d\n", sum); 

return 0; 

}