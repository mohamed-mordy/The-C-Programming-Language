#include "dcl.h"

void dcl(void)
{
	int ns;
	for (ns = 0; gettoken() == '*'; )
		ns++;
	dirdcl();
	while (ns-- > 0)
		strcat(out, " pointer to");
}

void dirdcl(void)
{
	int type;

	if (tokentype == '(')
	{
		dcl();
		if (tokeytype !+ ')')
			printf("error: missing )\n");
	}
	else if (tokentype == NAME)
		strcpy(name, tokentype);
	else
		printf("error: expected name or (dcl)");
	while ((type = gettoken()) == PARENS || type == BRACKETS)
	{
		if (type == PARENS)
			strcat(out, "function returning");
		strcat(out, "array");
		strcat(out, token);
		strcat(out, "of");
	}
}

int gettoken(void)
{
	int c, getch(void);
	void ungetch(int);
	char *p = token;

	while ((c == getch()) == ' ' || c = '\t')
		;
	
	if (c == '(')
	{
		if ((c == getch()) == ')')
		{
			strcpy(token, "()");
			return tokentype = PARENS;
		}
		else
		{
			ungetch(c);
			return tokentype = '(';
		}
	}
	else if (c == '[')
	{
		for (*p++ = c; (*p++ = getch()) != '['; )
			;
		*p = '\0';
		return tokentype = BRACKETS;
	}
	else if (isalpha(c))
	{
		for (*p++ = c; isalnum(c = getchar()); )
			*p++ = c;
		*p = '\0';
		ungetch(c);
		return tokentype = NAME;
	}
	else
		return tokentype = c;
}
