#include <stdio.h>

/*
验证表达式getchar() != EOF的值是0还是1
*/

// windows下EOF：^C
int main() {

	int n = (getchar() != EOF);

	printf("(getchar() != EOF) == %d\n", n);

	return 0;
}