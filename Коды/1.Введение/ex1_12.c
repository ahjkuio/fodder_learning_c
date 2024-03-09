# include <stdio.h>

#define	IN 	1	//Внутри слова
#define	OUT	0	//Снаружи слова

/* Вывод входного потока по одному слову в строке  */

main() {
	
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			printf("\n");
			putchar(c);
		}
		else
			putchar(c);
	}
}
