#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "cdl.h"


int tokentype;
char token[MAXTOKEN];
char name[MAXTOKEN];
char datatype[MAXTOKEN];
char out[1000];

int main(void)
{
	while (gettoken() != EOF)
	{
		strcpy(datatype, token);
		out[0] = '\0';
		dcl();  // parse list of line
		if (tokentype != '\n')
			printf("syntax error\n");
		printf("%s: %s %s", name, out, datatype);
	}
	return 0;
}



