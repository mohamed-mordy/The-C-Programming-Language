#include <stdio.h>
#include "strindex.h"


int strindex(const char *s, const char *t)
{
	const char *sp = s;
	const char *tt;
	const char *ss;

	while (*s)
	{
		tt = t;
		ss = s;
		while (*tt && *ss == *tt)
			tt++, ss++;
		if (*tt == '\0')
				return (int)(s - sp);
		s++;
	}
	return -1;
}

int strrindex(const char *s, const char *t) // return the index of the rightmost occurence
{
	const char *sp = s;
	const char *tt;
	const char *ss;
	int index = 0;

	while (*s)
	{
		tt = t;
		ss = s;
		while (*tt && *ss == *tt)
			tt++, ss++;
		if (*tt == '\0')
				index = (int)(s - sp);
		s++;
	}
	if (index && !*s)
		return index;
	return -1;
}

