#include <stdio.h>

int main(void)
{
	int nc = 0;
	while(getchar() != EOF)
		++nc;
	printf("%d\n", nc);
}

