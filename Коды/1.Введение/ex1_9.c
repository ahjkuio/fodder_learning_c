#include <stdio.h>

/*Удаление лишних пробелов во входном потоке*/

main() {
	int c;
	while((c = getchar()) != EOF) {
		if (c == ' ') {
			putchar(c);
			while ((c = getchar()) == ' ');
		}
		putchar(c);
	}
}