#include <stdio.h>

#define IN 1
#define OUT 0

/* Программа для вывода Гистограмм длин слов во входном потоке.
Построение горизонтаьное (вариант с вертикальным построением отложен) */

main() {
	int state, c, len, n;

	state = OUT;
	len = 0;
	n = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t') {
			if (state == IN) {
				printf("%d) ", n);
				while (len > 0) {
					putchar('=');
					--len;
				}
				putchar('\n');
				state = OUT;
			}
		}
		else if (state == OUT) {
			state = IN;
			++n;
			++len;
		}
		else {
			++len;
		}
	}
}