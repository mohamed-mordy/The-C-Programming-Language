#include <stdio.h>
#include <stdlib.h>
#include "strindex.h"
#include "mygetline.h"

#define MAXLINE 1000

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		printf("usage: match <pattern>");
		exit(1);
	}

	char line[MAXLINE];

	while (mygetline(line, MAXLINE) > 0)
		if (strrindex(line, argv[1]) >= 0)
			printf("%s", line);
	return 0;
}

