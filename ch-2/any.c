#include <stdio.h>

int any(char *s, char *t);

int main(void)
{
	char s[] = "how are you, my friend";
	char t[] = "ils"; // expected to print "18"
	printf("%d", any(s, t));
}

int any(char *s, char *t)
{
	int i, k, state;

	for (i = 0; s[i]; i++)
	{
		for (k = 0; t[k]; k++)
			if (state = (s[i] == t[k]))
				break;
		if (state)	
			return i;
	}
	return -1;
}
