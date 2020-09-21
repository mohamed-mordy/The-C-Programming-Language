// 9/20/2020 11:53:07 PM
#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAXWORD 100

typedef struct tnode {
	char *word;
	int count;
	struct tnode *left;
	struct tnode *right;
}tnode;

tnode *addtree(tnode *p, char *w);
void treeprint(tnode *p);
int mygetword(char *word, int lim);

int main(void)
{
	tnode *root;
	char word[MAXWORD];
	root = NULL;
	while (mygetword(word, MAXWORD) != EOF)
		if (isalpha(*word))
			root = addtree(root, word);
	treeprint(root);
	return 0;
}

tnode *talloc(void);
char *mystrdup(char *s);

tnode *addtree(tnode *p, char *w)
{
	int cond;

	if (p == NULL)
	{
		p = talloc();
		p->word = mystrdup(w);
		p->count = 1;
		p->left = p->right = NULL;
	}
	else if ((cond = strcmp(w, p->word)) == 0)
		p->count++;
	else if (cond < 0)
		p->left = addtree(p->left, w);
	else
		p->right = addtree(p->right, w);
	return p;
}

void treeprint(tnode *p)
{
	if (p != NULL)
	{
		treeprint(p->left);
		printf("%4d  %s\n",p->count, p->word);
		treeprint(p->right);
	}	
}

#include <stdlib.h>

tnode *talloc(void)
{
	return (tnode *) malloc(sizeof (tnode));
}

char *mystrdup(char *s)
{
	char *p = malloc(strlen(s) + 1);
	if (p != NULL)
		strcpy(p, s);
	return p;
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

