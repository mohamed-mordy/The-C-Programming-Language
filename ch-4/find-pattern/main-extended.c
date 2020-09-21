#include <stdio.h>
#include <string.h>
#include "mygetline.h"

#define MAXLINE 1000

int main(int argc, char **argv)
{
	char line[MAXLINE];
	int c, lineno = 0, except = 0, number = 0, found = 0;
	//
	while (--argc && **++argv == '-')
		while (c = *++*argv)
		{
			switch (c)
			{
			case 'x':
				except = 1;
				break;
			case 'n':
				number = 1;
				break;
			default:
				printf("find: illegal option%c\n", c);
				argc = 0;
				found = -1;
				break;
			}
		}
	if (argc != 1)
		printf("Usage: find -x -n pattern\n");
	else
		while (mygetline(line, MAXLINE) > 0)
		{
			lineno++;
			if ((strstr(line, *argv) != NULL) != except)
			{
				if (number)
					printf("%1d", lineno);
				printf("%s", line);
				found++;
			}
		}
	return found;
}

