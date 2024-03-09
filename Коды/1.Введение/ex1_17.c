#include <stdio.h>

int getlline(char line[], int maxline);
void copy(char to[], char from[]);

#define MAXLINE 1000
#define BORDER 4

/* печать строк с кол-вом сиволов > 80*/
int main() {
	int len; //длина текущей строки
	int max; // длина максимальной строки из просмотренных

	char line[MAXLINE]; //текующая строка
	char longest[MAXLINE]; //самая длинная строка*/

	max = 0;

	while ((len = getlline(line, MAXLINE)) > 0)
		if (len > BORDER) {
			printf("%s", line);
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

// copy: копирует из 'from' в 'to'; to достаточно большой
void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i; 
}