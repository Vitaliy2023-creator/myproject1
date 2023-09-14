# myproject1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

#define		D		2.54
#define		D2		2.32
void task1()
{
	int num1, num2;
	puts("Введите число: ");
	scanf("%d", &num1);
	printf("Введено число %d", num1);
	puts("\nВведите второе число: ");
	scanf("%d", &num2);
	printf("сумма чисел: %d,\nразность чисел: %d,\nпроизведение чисел: %d,\nчастное чисел: %d,\nостаток от деления: %d\n",
		num1 + num2, num1 - num2, num1 * num2, num1 / num2, num1 % num2);
}
void task2()
{
	int dym, pulgada;
	float result;
	printf("Введите число: ");
	scanf("%d", &dym);
	result = D * dym;
	printf("%d дюймов - это %.1f см \n", dym, result);
	printf("Введите второе число: ");
	scanf("%d", &pulgada);
	result = D2 * pulgada;
	printf("%d испанских дюймов - это %.1f см ", pulgada, result);
}
void task3()
{
	float a, b;
	scanf_s("%f", &a);
	scanf_s("%f", &b);
	printf("-----------------\n");
	printf("|a*b|a+b|a-b|\n");
	printf("|%5.0f*%5.0f|%5.0f+%5.0f|%5.0f-%5.0f|\n",a,b,a,b,a,b);
	printf("-----------------\n");
	printf("|%5.0f|%5.0f|%5.0f|",a*b,a+b,a-b);
}
int main()
{
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
}
