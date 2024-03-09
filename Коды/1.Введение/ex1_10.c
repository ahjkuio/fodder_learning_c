#include <stdio.h>

/*Программа замены знаков табуляции на \t, символов возврата назад(Backspace) на \b, а обратных косых черт на \\*/

main() {
	int c;
	while((c = getchar()) != EOF) {
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);	
	}
}