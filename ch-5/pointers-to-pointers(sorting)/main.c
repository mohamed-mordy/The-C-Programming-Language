#include <stdio.h>
#include <string.h>
#include "io.h"
#include "qsort.h"

#define MAXLINES 5000
char *lineptr[MAXLINES];

void qsort(char *lineptr[], int left, int right);

int main(void)
{
	int nlines;

	if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		qsort(lineptr, 0, nlines - 1);
		writelines(lineptr, nlines);
		return 0;
	}
	else
	{
		printf("error: input too big to sort!!\n");
		return 1;
	}	
}

