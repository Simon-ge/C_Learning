/* ==============================================================================
 * ����������C primer plus 2.12 �����ϰ��
 * �� �� �ߣ�Simon
 * ==============================================================================*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void)
{
	/*Exercise 1 ��ϰ��1*/
	printf("Gustav Mahler\n");
	printf("Gustav\n");
	printf("Mathler\n");
	printf("Gustav Mahler\n");

	printf("\n");
	/*Exercise 2 ��ϰ��2*/
	int age, days;
	age = 18;
	days = 365 * age;
	printf("your age %d :days %d", age, days);

	printf("\n");
	/*Exercise 4 ��ϰ��4*/
	void jolly();
	jolly();
	void deny();
	deny();
	printf("\n");
	/*Exercise 5 ��ϰ��5*/
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
    /*Exercise 6��ϰ��6*/
	int toes;
	toes = 10;
	printf("toes = %d\n", toes);
	printf("2 * toes = %d\n", 2 * toes);
	printf("double toes = %d\n", toes * toes);
	/*Exercise 7 ��ϰ��7*/
	printf("starting now:");
	void two();                   //�ر��������˴�����one_three������Ҫ����two()���������two��������������Ҫ��one_three��ǰ��
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
