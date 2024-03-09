#include <stdio.h>

/* Программа для вывода Гистограммы длин частот, с которыми встречаются во входном потоке различные символы */
// Я бы хотел еще ввести scale, но нужно бежать дальше.
main() {
	int c, i;
	int nchar[256];

	for (i = 0; i < 256; ++i)
		nchar[i] = 0;

	while ((c = getchar()) != EOF) {
		++nchar[c];
	}

	for (i = 0; i < 256; ++i) {
		if (nchar[i] != 0) {
			printf("%c|",i);
			while (nchar[i] != 0){
				putchar('=');
				--nchar[i];
			}
			putchar('\n');
		}
	}
}