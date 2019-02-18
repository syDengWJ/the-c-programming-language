#include <stdio.h>

/*
编写一个程序，把它的输入复制到输出，
并在此过程中把制表符换成\t，把回退符换成
\b、把反斜杠换成\\。这样可以使得制表符与回退符
能以无歧义的方式可见。
*/

#define MAXVAL 1000

int main() {
	char c;
	char s[MAXVAL];
	int i = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\t') {
			s[i++] = '\\';
			s[i++] = 't';
		} else if (c == '\b') {
			s[i++] = '\\';
			s[i++] = 'b';
		} else if (c == '\\') {
			s[i++] = '\\';
			s[i++] = '\\';
		} else {
			s[i++] = c;
		}
		s[i] = '\0';
	}
	printf("%s\n", s);
	return 0;
}	