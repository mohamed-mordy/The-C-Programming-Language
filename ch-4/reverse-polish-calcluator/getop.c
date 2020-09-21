#include <stdio.h>
#include <ctype.h>
#include "calc.h"


int getop(char *s)
{
	int c, d;

	while ((*s = c = getch()) == ' ' || c == '\t')
	;
	*(++s) = '\0'; // this is very important in case it is an operator, not a number
	if (!isdigit(c) && c != '.' )
		return c;  // not a number
	if (isdigit(c))
		while (isdigit(*s++ = c = getch()))
			;
	if (c == '.')
		while (isdigit(*s++ = c = getch()))
			;
	*s = '\0';
	if (c != EOF)
		ungetch(c);
	return NUMBER;
}

