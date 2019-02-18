#include <stdio.h>

/*
编写一个用于统计空格、制表符与换行符个数的程序
*/

int main() {
	int nspace=0, ntab=0, nenter=0;

	char c;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			nspace++;
		} else if (c == '\t') {
			ntab++;
		} else if (c == '\n') {
			nenter++;
		}
	}

	printf("nspace = %d, ntab = %d, nenter = %d\n", nspace, ntab, nenter);
	return 0;
}