#include <stdio.h>

/*Программа, копирющая входной поток в выходной по одному символу
с использованием getchat(), putchar()*/

main() {
	int c;

	c = getchar();
	while (c != EOF) {
		putchar(c);
		c = getchar();
	}
}