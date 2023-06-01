
#include "sdt.h"
#include "sdt-config.h"
#include <stdio.h>
int main()
{
	// программа является учебной
	int a, b, c,d;
	printf("Введите число а\n");
	scanf("%d", &a);
	printf("Введите число b\n");
	scanf("%d", &b);
	c  = a + b;
	printf("Сумма введенных чисел равна = %d", c);
	d = a/b;
	printf("Частное введенных чисел равно = %d", d);
}