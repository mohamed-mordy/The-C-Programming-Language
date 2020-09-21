#include <stdio.h>

int main()
{
	int c, pre;
	int brace, bracket, parenthese, doubleq, singleq, comment; 

	brace = bracket = parenthese = doubleq = singleq = comment = 0;
	while ((c = getchar()) != EOF)
	{
		
		if (c == '{')
			++brace;
		else if (c == '[')
			++bracket;
		else if (c == '(')
			++parenthese;
		else if (c == '\"')
			++doubleq;
		else if (c == '\'')
			++singleq;
		else if (c == '*' && pre == '/')
			++comment;
		else if (c == '}')
			--brace;
		else if (c == ']')
			--bracket;
		else if (c == ')')
			--parenthese;
		else if (c == '\"')
			--doubleq;
		else if (c == '\'')
			--singleq;
		else if (c == '/' && pre == '*')
			--comment;
		pre = c;
	}

	if (brace != 0)
		printf("unbalanced brace\n");
	if (bracket != 0)
		printf("unbalanced bracket\n");
	if (parenthese != 0)
		printf("unbalanced parenthese\n");
	if (doubleq != 0)
		printf("unbalanced double quote\n");
	if (singleq != 0)
		printf("unbalanced single quote\n");
	if (comment != 0)
		printf("unclosed comment\n");
}
