/* ==============================================================================
 * 功能描述：C primer plus 2.12 编程练习题
 * 创 建 者：Simon
 * ==============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	/*Exercise 1 练习题1*/
	printf("Gustav Mahler\n");
	printf("Gustav\n");
	printf("Mathler\n");
	printf("Gustav Mahler\n");

	printf("\n");
	/*Exercise 2 练习题2*/
	int age, days;
	age = 18;
	days = 365 * age;
	printf("your age %d :days %d", age, days);

	printf("\n");
	/*Exercise 4 练习题4*/
	void jolly();
	jolly();
	void deny();
	deny();
	printf("\n");
	/*Exercise 5 练习题5*/
	void br();
	void ic();
	br();
	printf(",");
	ic();
	printf("\n");
	ic();
	printf(",\n");
	br();
	printf("\n");
    /*Exercise 6练习题6*/
	int toes;
	toes = 10;
	printf("toes = %d\n", toes);
	printf("2 * toes = %d\n", 2 * toes);
	printf("double toes = %d\n", toes * toes);
	/*Exercise 7 练习题7*/
	printf("starting now:");
	void two();                   //特别声明，此处。因one_three函数需要调用two()函数，因此two函数的声明必须要在one_three的前面
	void one_three();
	one_three();
	printf("done!");

	getchar();
	return 0;
}
void jolly() {
	int i;
	for (i = 1; i <= 3; i++) {
		printf("For he's jolly good fello!\n");
	}
}
void deny() {
	printf("Which nobody can deny\n");
}
void br() {
	printf("Brazil, Russia");
}
void ic() {
	printf("India, China");
}
void one_three() {
	printf("one\n");
	two();
	printf("three\n");
}
void two() {
	printf("two\n");
}
