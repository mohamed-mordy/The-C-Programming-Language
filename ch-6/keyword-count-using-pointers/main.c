// 9/20/2020 11:53:36 PM
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAXWORD 100

struct key {
	char *word;
	int count;
} keytab[] = {
	"auto",0, "break",0, "case",0, "char",0, "const",0, "continue",0, "default",0, "do",0,
	"double",0, "else",0, "enum",0, "extern",0, "float",0, "for",0, "goto",0, "if",0,
	"int",0, "long",0, "register",0, "return",0, "short",0, "signed",0, "sizeof",0, "static",0,
	"struct",0, "switch",0, "typedef",0, "union",0, "unsigned",0, "void",0, "volatile",0, "while",0,
};
typedef struct key key;

#define NKEYS (sizeof (keytab)/sizeof (*keytab))

int mygetword(char *word, int lim);
key *binsearch(char *word, key *keys, key *low, key *high);

int main(void)
{
	char word[MAXWORD];
	key *p;
	//
	while (mygetword(word, MAXWORD) != EOF)
		if (isalpha(*word))
			if (p = binsearch(word, keytab, keytab, keytab + NKEYS - 1))
				p->count++;
	// print out the table
	for (p = keytab; p < keytab + NKEYS; p++)
		if (p->count > 0)
			printf("%4d %s\n", p->count, p->word);
	return 0;
}

key *binsearch(char *word, key *keys, key *low, key *high)
{
	key *mid = low + (high - low) / 2;
	int cond = strcmp(mid->word, word);
	if (high == low && cond != 0)
		return NULL;
	if (cond > 0)
		binsearch(word, keys, low, mid - 1);
	else if (cond < 0)	
		binsearch(word, keys, mid + 1, high);
	else
		return mid;
}

char c, getch(void);
void ungetch(int);

int mygetword(char *word, int lim)
{
	char *w = word;
	//
	while (isspace(c = getch()))
		;
	if (c != EOF)		
		*w++ = c;
	if (!isalpha(c))
	{
		*w = '\0';
		return c;
	}
	for (; --lim; w++)
		if (!isalnum(*w = getch()))
		{
			ungetch(*w);
			break;
		}
	*w = '\0';
	return *word;
}

