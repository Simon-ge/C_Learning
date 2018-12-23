/* ==============================================================================
 * 功能描述：char 类型展示，显示字符的代码编号
 * 创 建 者：Simon
 * ==============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	//char ch;
	
	//printf("Please enter a character.\n");
	//此处需要注意，采用scanf_s函数，必须要指定缓冲区大小，若未指定则无法识别输入的参数
	//scanf_s("%c", &ch,1);
	//printf("The code for %c is %d.\n", ch, ch);

	//处理方法在项目属性中将SDL checks这个变为否就可以使用scanf函数了，省的忘记设置缓冲区大小导致运行失败
	char ch2;
	scanf("%c", &ch2);
	printf("%c %d", ch2, ch2);


	system("pause");
	getchar();
	return 0;
}