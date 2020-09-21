#include <stdlib.h>

int main(void)
{
	while(malloc(100000))
		;
	while(1)
		;
}

