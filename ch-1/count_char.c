#include <stdio.h>

int main(void)
{
	int c, nl, blk, tb;
	//
	nl = blk = tb = 0;
	while((c = getchar()) != EOF)
		if(c == '\n')
			++nl;
		else if(c == ' ')		
			++blk;
		else if(c == '\t')
			++tb;
	printf("\nnl = %d\nblk = %d\ntb = %d\n", nl, blk, tb);
}

