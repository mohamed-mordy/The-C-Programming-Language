void mystrcat(char *s, const char *t)
{
	while (*s)
		s++;
	while (*s++ = *t++)
		;
}

void mystrncat(char *s, const char *t, int n)
{
	while (*s)
		s++;
	while (n-- && (*s++ = *t++))
		;
	*s = '\0';
}

void mystrcpy(char *dst, const char *src)
{
	while (*dst++ = *src++)
		;
}

void mystrncpy(char *dst, const char *src, int n)
{
	while (n-- && (*dst++ = *src++))
		;
	*dst = '\0';
}

int mystrcmp(const char *s, const char *t)
{
	while (*s == *t) {
		if (!*s)
			return 0;
		s++, t++;
	}
	return *s - *t;
}

int mystrncmp(const char *s, const char *t, int n)
{
	while ((*s == *t) && n) {
		if (!*s)
			return 0;
		s++, t++, n--;
	}
	if (!n)
		return 0;
	return *s - *t;
}

int mystrlen(char *s)
{
	char *p = s;
	while (*p)
		p++;
	return p - s;
}

int mystrend(const char *s, const char *t)
{
	const char *ss;
	const char *tt;
	//
	while (*s) {
		tt = t;
		ss = s;
		while (*tt++ == *ss++)
			if (!*ss && !*tt)
				return 1;
		s++;
	}
	return 0;
}

int strindex(const char *s, const char *t)
{
	const char *sp = s;
	const char *tt;
	const char *ss;

	while (*s) {
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

int strrindex(const char *s, const char *t) 
{
	const char *sp = s;         // return the index of the rightmost occurence
	const char *tt;
	const char *ss;
	int index = 0;

	while (*s) {
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

void reverse(char *s)
{
	char *t = s;
	char c;
	while (*t)
		t++;
	t--;
	while (t > s)
		c = *s, *s = *t, *t = c, t--, s++;
}
