#include <stdio.h>

#define OUT 0
#define IN 1

int main(void)
{
	int c, state = OUT;
	//
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
			state = IN;
		else if (state)
		{
			state = OUT;
			putchar('\n');
			putchar(c);
		}
		else
			putchar(c);
	}
}
