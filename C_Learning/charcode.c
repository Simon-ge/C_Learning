/* ==============================================================================
 * ����������char ����չʾ����ʾ�ַ��Ĵ�����
 * �� �� �ߣ�Simon
 * ==============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	//char ch;
	
	//printf("Please enter a character.\n");
	//�˴���Ҫע�⣬����scanf_s����������Ҫָ����������С����δָ�����޷�ʶ������Ĳ���
	//scanf_s("%c", &ch,1);
	//printf("The code for %c is %d.\n", ch, ch);

	//����������Ŀ�����н�SDL checks�����Ϊ��Ϳ���ʹ��scanf�����ˣ�ʡ���������û�������С��������ʧ��
	char ch2;
	scanf("%c", &ch2);
	printf("%c %d", ch2, ch2);


	system("pause");
	getchar();
	return 0;
}