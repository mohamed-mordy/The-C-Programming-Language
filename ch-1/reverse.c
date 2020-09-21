#include <stdio.h>
#include <string.h>

char *reverse(char txt[]);

int main(void)
{
	char test[] = "0123456789";
	printf("%s\n", reverse(test));
}

char *reverse(char *txt)
{
	for (int j = 0, i = strlen(txt) - 1, c; j < i; j++, i--)
		c = txt[j], txt[j] = txt[i], txt[i] = c;
	return txt;
}

