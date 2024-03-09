#include <stdio.h>

/*Подсчет символов во входном потоке V2 (через for) */

main() {
	double nc;

	for (nc = 0; getchar() != EOF; ++nc)
		;
	printf("%.0f\n", nc);
}