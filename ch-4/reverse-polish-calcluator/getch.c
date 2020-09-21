#include <stdio.h>

#define BUFSIZE 100

static char buf[BUFSIZE];
static int bufp = 0; // next free position on buffer

int getch(void)
{
	return bufp ? buf[--bufp] : getchar();
}

void ungetch(int c)
{
	if (bufp >= BUFSIZE)
		printf("ungetch: too many characters\n");
	else
		buf[bufp++] = c;
}
