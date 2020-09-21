// 9/20/2020 11:52:26 PM
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define HASHSIZE 101

typedef struct nlist {
	char *name;
	char *defn;
	struct nlist *next;
} nlist;
nlist *table[HASHSIZE];

#include "table.h"

static unsigned hash(char *s)
{
	unsigned hashval;
	for (hashval = 0; *s; s++)
		hashval = *s + 31 * hashval;
	return hashval % HASHSIZE;
}

nlist *lookup(char *name)
{
	nlist *p = table[hash(name)];
	for ( ; p; p->next)
		if (strcmp(p->name, name) == 0)
			return p;
	return NULL;
}

nlist *install(char *name, char *defn)
{
	nlist *p;
	unsigned hashval;
	//
	if ((p = lookup(name)) == NULL) // not found
	{
		p = (nlist *) malloc(sizeof (nlist));
		if (p == NULL || (p->name = strdup(name)) == NULL)
			return NULL;
		hashval = hash(name);
		p->next = table[hashval];
		table[hashval] = p;
	}
	else // exists
		free(p->defn); // free prev defn
	if ((p->defn = strdup(defn)) == NULL) // add new defn
		return NULL;
	return p;
}

void undef(char *name)
{
	nlist *p = lookup(name);
	if (p)
	{
		free(p->name), p->name = NULL;
		free(p->defn), p->defn = NULL;
	}
}
