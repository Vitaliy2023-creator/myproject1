#include <stdio.h>
int main()
{
    float L = 393;
    float n = 4;
    printf("Дано:\n");
    printf("%10d\n",(int)n);
    printf("%10d\n",(int)L);
    printf("%15s\n","_________");
    printf("Ответ:\n");
    printf("%6s","");
    // вычисляем целую часть дроби
    printf("+");
    printf("%02d.",(int)n/(int)L);
    // вычисляем дробную часть
    
    printf("%06d", (int)(((n/L)-(int)n/(int)L) *1000000));
    return 0;
}
