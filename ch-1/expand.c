#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define len(x) (sizeof (x)/sizeof (x[0]))

void expand(char *reg, char *buf);

int main(int argc, char *argv[])
{
	char buf[1000];
	expand(argv[1], buf);
	return 0;
}


void expand(char *reg, char *buf)
{
	int from[10];
	int to[10];
	int j = 0;
	//
	for (int i = 0; i < 10; i++)
		from[i] = 0, to[i] = 0;
	//
	for (int i = 0; i < strlen(reg); i++)
	{
		if (reg[i] == '-')
			continue;
		else if (reg[i] >= 'a' && reg[i] <= 'z')
			from[j] ? (to[j] = reg[i]) : (from[j] = reg[i]);
		else if ( reg[i] >= 'A' && reg[i] <= 'Z')
			from[j] ? (to[j] = reg[i]) : (from[j] = reg[i]);
		else if (reg[i] >= '0' && reg[i] <= '9')
			from[j] ? (to[j] = reg[i]) : (from[j] = reg[i]);
			//
		if (from[j] && to[j]) 
			j++;
	}
	for (int i = 0; from[i]; i++)
		for (int j = from[i]; j <= to[i]; j++)
			printf("%c", j);
}

