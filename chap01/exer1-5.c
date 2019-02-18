#include <stdio.h>

/*
修改温度转换程序，要求以逆序打印温度转换表，即从
300到0度。
*/

int main() {

	float fahr, celsius;
	printf("F \t C\n");
	for (fahr = 300; fahr >= 0; fahr -= 20) {
		celsius = (5.0/9.0) * (fahr - 32.0);
		printf("%3.0f % 6.0f\n", fahr, celsius);
	}
	return 0;
}