#include <stdio.h>

#define MAX 500

int main(void)
{
	int c;
	int freq[MAX];
	//
	for (int i = 0; i < MAX; ++i)
		freq[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c < MAX)
			++freq[c];
	}
	for (int i = 0; i < MAX; ++i)
	{
		if (freq[i] != 0)
		{
			printf("%c |", i);
			for (int j = 0; j < freq[i]; ++j)
				printf("#");
			printf("\n");
			
		}
	}
}

