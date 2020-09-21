#include <stdio.h>

int main(void)
{
	int c, i, nblank, nother;
	int ndigit[10];
	//
	i = nblank = nother = 0;
	for (i = 0; i < 10; ++i)
		ndigit[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c >= '0' && c <= '9')
			++ndigit[c - '0'];
		else if (c == ' ' || c == '\t' || c == '\n')
			++nblank;
		else
			++nother;
	}
	printf("ndigits = ");
	for (i = 0; i < 10; ++i)
		printf("%d ", ndigit[i]);
	printf("\n");
	printf("nblank = %d nother = %d\n", nblank, nother);
}

