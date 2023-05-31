
#include "sdt.h"
#include "sdt-config.h"
#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Введите число а\n");
	scanf("%d", &a);
	printf("Введите число b\n");
	scanf("%d", &b);
	c  = a + b;
	printf("Сумма введенных чисел равна = %d", c);
}