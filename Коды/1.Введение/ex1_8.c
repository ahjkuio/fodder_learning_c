#include <stdio.h>

/*Подсчет пробелов, знаков таб и символо конца строки во входном потоке*/

main() {
	int c, nl, nt, ns;

	nl = 0;
	nt = 0;
	ns = 0;
	while((c = getchar()) != EOF) {
		if (c == '\n')
			++nl;
		if (c == '\t')
			++nt;
		if (c == ' ')
			++ns;
	}
	printf("Enter-%d\nTab-%d\nSpace-%d\n", nl, nt, ns);
}