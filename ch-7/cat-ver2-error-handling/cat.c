//9/21/2020 7:06:33 PM

#include <stdio.h>
#include <stdlib.h>

void filecopy(FILE *in, FILE *out);

int main(int argc, char **argv)
{
	FILE *fp;
	char *prog = *argv;
	if (argc == 1)
	{
		filecopy(stdin, stdout);
	}
	else
		while (--argc)
			if ((fp = fopen(*++argv,"r")) == NULL)
			{
				fprintf(stderr, "%s: can't open %s\n", prog, *argv);
				exit(1);
			}
			else
			{
				filecopy(fp, stdout);
				fclose(fp);
			}
			if (ferror(stdout))
			{
				fprintf(stderr, "%s: error writing standard out\n", prog);
				exit(2);
			}
	exit(0);
}

void filecopy(FILE *in, FILE *out)
{
	int c;
	while ((c = getc(in)) != EOF)
		putc(c, out);
}
