#include <stdio.h>

/*Подсчет символов во входном потоке V1 */

main() {
	long nc;

	nc = 0;
	while (getchar() != EOF) /*скобки вокруг = важны, так как приоритет операции != выше =*/
			++nc;
	printf("%ld\n", nc);
}