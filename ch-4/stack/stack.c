#include <stdio.h>
#include "calc.h"

#define MAXVAL 100 // maximum depth of val stack

static double val[MAXVAL];
static double *sp = val;       // next free stack position

void push(double f)
{
	if (sp < (val + MAXVAL))
		*sp++ = f;
	else
		printf("error: stack full, can't push%g\n", f);
}

double pop(void)
{
	if (sp > val)
		return *--sp;
	else
	{
		printf("error: stack empty\n"); return 0.0;
	}
}
