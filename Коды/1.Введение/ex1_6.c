#include <stdio.h>

/*Проверим действительно ли getchar != EOF равно 1 или 0*/

main() {
	int c;
	while (c = (getchar() != EOF)) { /*скобки вокруг = важны, так как приоритет операции != выше =*/
			printf("%d",c);
	}
}