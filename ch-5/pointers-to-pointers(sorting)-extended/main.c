// 9/20/2020 5:41:40 AM

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "io.h"
#include "myqsort.h"
#include "numcmp.h"

#define MAXLINES 5000

char *lineptr[MAXLINES];

int main(int argc, char **argv)
{
	int nlines, numeric = 0;
	//
	if (argc == 2 && strcmp(argv[1], "-n") == 0)
		numeric = 1;
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0)
	{
		myqsort((void **)lineptr, 0, nlines - 1, (int (*)(void *, void *)) numeric ? numcmp : strcmp);
		writelines(lineptr, nlines);
		return 0;
	}
	else
	{
		printf("error: input too big to sort!!\n");
		return 1;
	}	
}

