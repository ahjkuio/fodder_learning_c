# include <stdio.h>

#define	IN 	1	//Внутри слова
#define	OUT	0	//Снаружи слова

/* подсчет строк, слов и символов во входном потоке */

main() {
	
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n')
			++nl;
		if (c == ' ' || c == '\n' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			state = IN;
			++nw;
		}
	}
	printf("nl-%d nw-%d nc-%d\n", nl, nw, nc);
}
