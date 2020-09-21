#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, nc,nw, nl, state;
	nc = nw = nl = 0;
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++nl;
		if (c == '\t' || c == ' ' || c == '\n')
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			++nw;
		}
	}
	printf("words = %d|characters = %d|lines = %d\n", nw, nc, nl);
}
