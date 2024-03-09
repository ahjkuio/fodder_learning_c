#include <stdio.h>

/*вывод таблицы темеператур по Фаренгейту и Цельсию с использованием функции*/

#define	LOWER	0
#define UPPER	300
#define STEP	20

float transform(int fahr);

main() {
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d\t%6.1f\n", fahr, transform(fahr));
	return 0;
}

float transform(int fahr) {
	float cels;

	cels  = (5.0/9.0) * (fahr - 32);
	return cels;
}
