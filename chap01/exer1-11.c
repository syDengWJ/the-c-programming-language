#include <stdio.h>

/*
你准备怎样测试单词计数程序？如果程序中出现任何错误，
那么什么样的输入有利于发现这些错误？
*/

#define IN 	1
#define OUT 0

int main() {
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
		}
		if (c == ' ' || c == '\n' || c == '\t') {
			state = OUT;
		} else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("%d %d %d\n", nl, nw, nc);
	return 0;
}