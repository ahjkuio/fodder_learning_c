#include <stdio.h>

/*вывод таблицы темеператур по Фаренгейту и Цельсию с использование Оператора For и Символических Констант*/

#define	LOWER	0
#define UPPER	300
#define STEP	20

main() {
	int fahr;

	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3d\t%6.1f\n", fahr, (5.0/9.0) * (fahr - 32));
	}
}