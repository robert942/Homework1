#include <stdio.h>
#include <stdlib.h>

int m3(void)
{
	int a;

	printf("請輸入一個整數:\n");
	scanf_s("%d", &a);

	if (a % 2 == 0) 
		printf("%d是偶數",a);
	
	else 
		printf("%d是奇數",a);
}