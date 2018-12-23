/* ==============================================================================
 * 功能描述：C语言学习
 * 创 建 者：Simon
 * ==============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	int n, n2, n3;

	n = 5;
	n2 = n * n;
	n3 = n2 * n2;

	printf("n = %d , n squared = %d, n cubed = %d\n", n, n2, n3);
	int num;
	num = 2;
	printf("%d + %d = %d", num, num, num + num);
	
	printf("\n");

	int words, lines;
	words = 3020;
	lines = 350;
	printf("There were %d words and %d lines", words, lines);
	printf("\n");

	int a, b;
	a = 5;
	b = 2;
	b = a;
	a = b;
	printf("%d, %d\n", b, a);
	int x, y;
	x = 10;
	y = 5;
	y = x + y;
	x = x * y;
	printf("%d, %d\n", x, y);
	getchar();
	return 0;
}