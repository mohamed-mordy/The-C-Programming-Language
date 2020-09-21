#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mygetline.h"

#define MAXLEN 1000

int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];

	nlines = 0;
	while ((len = mygetline(line, MAXLEN)) > 0)
		if (nlines > maxlines || (p = malloc(len)) == NULL)
			return -1;
		else
		{
			line[len - 1] = '\0';
			strcpy(p, line);
			lineptr[nlines++] = p;
		}		
	return nlines;
}

void writelines(char **lineptr, int nlines)
{
	while (nlines--)
		printf("%s\n", *lineptr++);
}

