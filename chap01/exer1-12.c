#include <stdio.h>

/*
编写一个程序，以每行一个单词的形式打印输入
*/

#define MAXVAL 1000

int main() {
	char c;
	char s[MAXVAL];
	int i = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\t' || c == '\n') {
			s[i++] = '\n';
		} else {
			s[i++] = c;
		}
	}
	s[i] = '\0';
	
	printf("%s\n", s);
	return 0;
}