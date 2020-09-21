#include <stdio.h>

char *squeeze(char *s1, char *s2);

int main(void)
{
	char s[] = "123000012345678923456789";
	char t[] = "123";
	printf("%s", squeeze(s, t));
	return 0;
}

char *squeeze(char *s1, char *s2)
{
	int i, j, k, state;

	for (i = j = 0; s1[i] != '\0'; i++)
	{
		for (k = 0; s2[k] != '\0'; k++)
			if (state = (s1[i] == s2[k]))
				break;
		if (!state)
			s1[j++] = s1[i];
	}
	s1[j] = '\0';
	return s1;
}

