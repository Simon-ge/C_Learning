/* ==============================================================================
 * ����������C����ѧϰ
 * �� �� �ߣ�Simon
 * ==============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void butler();

int main(void)
{
	printf("I will summon the butler function .\n");
	butler();
	printf("Yes. Bring me some tea and writeable DVDs.\n");

	getchar();
	return 0;
}

void butler(void)
{
	printf("You rang, sir?\n");
}