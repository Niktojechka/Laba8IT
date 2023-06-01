
#include "sdt.h"
#include "sdt-config.h"
#include <stdio.h>
int main()
{
	//учебная программа
	int a, b, c, d;
	printf("Введите число а\n");
	scanf("%d", &a);
	printf("Введите число b\n");
	scanf("%d", &b);
	c  = a + b;
	printf("Сумма введенных чисел равна = %d", c);
	if a > b 
		d = a - b;
	else
		d = b - a;
	printf("произведение введенных чисел равно = %d", d);
}