#include <stdio.h>

#define MAX 46

int main(void)
{
	int c, max_freq, count;
	int freq[MAX];
	//
	max_freq = count = 0;
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
		if (freq[i] > max_freq)
			max_freq = freq[i];
	}

	//<print the histogram>
	for (int j = 0, n = max_freq; j < n; ++j)
	{
		for (int i = 0; i < MAX; ++i)
		{
			if (freq[i] != 0)
			{
				printf("  ");
				if (freq[i] >= max_freq)
					printf("##");
				else
					printf("  ");
				printf("  ");
			}
		}
		printf("\n");
		--max_freq;
	}
	//endof<>
	//<print the X line>
		for (int i = 0; i < MAX; ++i)
		{
			if (freq[i] != 0)
			{
				printf("______");
			}
		}
		printf("\n");
	//endof<>
	//<print the x line data>
	for (int i = 0; i < MAX; ++i)
	{
		if (freq[i] != 0)
		{
			printf("  %2d  ", i);
		}
	}
	printf("\n");
	//endof<>
}
