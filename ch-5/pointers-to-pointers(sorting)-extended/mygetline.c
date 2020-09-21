#include "mygetline.h"
#include <stdio.h>

int mygetline(char *buf, int max)
{
	int c;
	char *s = buf;

	while (--max > 0 && (c = getchar()) != EOF && c != '\n')
		*buf++ = c;
	if (c == '\n')
		*buf++ = c;
	*buf = '\0';
	return (int) (buf - s);
}

