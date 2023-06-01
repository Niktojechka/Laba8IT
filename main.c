
#include "sdt.h"
#include "sdt-config.h"
#include <stdio.h>
int main()
{
	int a, b, c,d ,e;
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
	return 0;
	e = a/b;
	printf("Частное введенных чисел равно = %d", e);
}