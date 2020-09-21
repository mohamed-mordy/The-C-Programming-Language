#include <stdio.h>

#define MAX 46

int main(void)
{
	int c, count = 0;
	int freq[MAX];
	//
	for (int i = 0; i < MAX; ++i)
		freq[i] = 0;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (count != 0)
				++freq[count];
			count = 0;
		}
		else
		{
			++count;
		}
	}
	for (int i = 0; i < MAX; ++i)
	{
		if (freq[i] != 0)
		{
			printf("length of %2d |", i);
			for (int j = 0; j < freq[i]; ++j)
				printf("-");
			printf("\n");
			
		}
	}
}
