#include <stdio.h>

int getlline(char line[], int maxline);
void reverse(char from[]); 

#define MAXLINE 1000

/* в каждой вводимой строке заменять стоящие подряд
символы пробелов и табуляций на один пробел и удалять пустые строки. */

int main() {
	int len;
	char line[MAXLINE]; //текующая строка

	while ((len = getlline(line, MAXLINE)) > 0) {
		reverse(line);
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

// reverse: переворачивает строку
void reverse(char from[]) {
	int i;
	i = 0; 
	while (from[i] != '\n')
		i++;
	while (i >= 0) {
		printf("%c", from[i]);
		--i;
	}
}


