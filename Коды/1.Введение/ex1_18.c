#include <stdio.h>

int getlline(char line[], int maxline);
void copy(char to[], char from[]);
void cleaner(char to[], char from[]); 

#define MAXLINE 1000

/* в каждой вводимой строке заменять стоящие подряд
символы пробелов и табуляций на один пробел и удалять пустые строки. */

int main() {

	int len;

	char line[MAXLINE]; //текующая строка
	char freshline[MAXLINE]; //очищенная строка 

	while ((len = getlline(line, MAXLINE)) > 0) {
		cleaner(freshline, line);
		printf("%s", freshline);
	}

	return 0;
}

// getlline: читает строку в s, возвращает длину
int getlline(char s[], int lim) {
	int c, i;
	for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// cleaner: очищает полученную строку от лишних пробелов и табов на 1 пробел и удаляет пустые строки
void cleaner(char to[], char from[]) {
	int i;
	int j;
	i = 0;
	j = 0;

	while ((to[j] = from[i]) != '\0') {
		if (from[i] == ' ' || from[i] == '\t') {
			to[j] = ' '; 
			while (from[i] == ' ' || from[i] == '\t')
				++i;
			++j;
		}
		else if (from[i] == '\n') {
			to[j] = '\0';
			++i;
			++j;
		}
		else {
			++j;
			++i;
		}
	}
}