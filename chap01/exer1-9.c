#include <stdio.h>

/*
编写一个程序， 把它的输入复制到输出， 并在此过程中将
多个相连的空格用一个空格代替
*/

#define MAXVAL 1000

int main() {
	char s[MAXVAL];
	char c;
	int nspace = 0, i = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ') {
			if (nspace == 0) {
				s[i++] = c;
			}
			nspace += 1;
		} else {
			nspace = 0;
			s[i++] = c;
		}
	}
	s[i] = '\0';

	printf("%s\n", s);
	return 0;
}