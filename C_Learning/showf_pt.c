/* ==============================================================================
 * ����������C����ѧϰ
 * �� �� �ߣ�Simon
 * ==============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;

	printf("%f can be written %e\n", aboat, aboat);
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);

	int a, b;
	a = 5;
	b = 3;
	b += ++a + b;			// ++a ��ʹa����1��Ȼ��+b, b += ��b=b+�ļ�д����˸þ���Ը�дΪ��b = b + (++a) + b
	//����һ��
	int c, d;
	c = 5;
	d = 3;
	d = d + (++c) + d;

	printf("a = %d  b = %d\n", a, b);
	printf("c = %d  d = %d\n", c, d);


	getchar();
	return 0;
}