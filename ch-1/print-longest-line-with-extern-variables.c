#include <stdio.h>

#define MAXLINE 1000
int max;
char line[MAXLINE];
char longest[MAXLINE];

int get_line(void);
void copy(void);


/* the external declarations can be omitted here,
   since the variables are defined in the same source file */

int main()
{
	int len;
	extern int max;
	max = 0;
	extern char longest[MAXLINE];
	while ((len = get_line()) > 0)
		if (len > max) {
			max = len;
			copy();
		}
	if (max > 0)
		printf("%s", longest);
}

int get_line(void)
{
	int c, i;
	extern char line[];
	for (i = 0; i < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
		line[i] = c;
	if (c == '\n') {
		line[i] = c;
		++i;
	}
	line[i] = '\0';
	return i;
}

void copy(void)
{
	extern char line[], longest[];
	int i = 0;
	while ((longest[i] = line[i]))
		++i;
}
