#include <stdio.h>
#include<locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    float L = 393;
    float n = 4;
    printf("Дано:\n");
    printf("  %10d\n", (int)n);
    printf("  %10d\n", (int)L);
    printf(" \t_________\n");
    printf("Ответ:\n");
    printf("\t%+010.6f", n / L);
    return 0;
}
