#include <stdio.h>

/* 
修改温度转换程序，使之在转换表上打印一个标题
*/

int main() {

	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;

	// 添加标题
	printf("F \t C\n");
	while (fahr <= upper) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f % 6.0f\n", fahr, celsius);
		fahr += step;
	}
}