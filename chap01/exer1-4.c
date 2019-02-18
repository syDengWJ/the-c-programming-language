#include <stdio.h>

/*
编写一个用于打印摄氏温度与华氏温度对照表的程序
*/

int main() {

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 150;
	step = 10;

	celsius = lower;

	printf("C \t F\n");

	while (celsius <= upper) {
		fahr = (9.0/5.0) * (celsius + 32);
		printf("%3.0f\t%3.0f\n", celsius, fahr);
		celsius += step;
	}

}