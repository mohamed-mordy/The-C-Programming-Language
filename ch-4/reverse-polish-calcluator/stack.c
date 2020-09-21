#include <stdio.h>
#include "stack.h"

#define MAX 100 // maximum depth of val stack

static double stack[MAX];
static double *sp = stack;       // next free stack position

void push(double f)
{
	if (sp < (stack + MAX))
		*sp++ = f;
	else
		printf("error: stack full, can't push%g\n", f);
}

double pop(void)
{
	if (sp > stack)
		return *--sp;
	else
	{
		printf("error: stack empty\n"); return 0.0;
	}
}

