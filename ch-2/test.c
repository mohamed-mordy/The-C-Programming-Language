#include <stdio.h>

void print(char *s);

int main(void)
{
	char *s = "how are you man";
	print(s);
	return 0;
}

void print(char *s)
{
	printf("%s", s);
}


