// 9/18/2020 10:29:05 PM
#include <ctype.h>
#include <stdio.h>
#include "myatof.h"

double myatof(char *s)
{
	double val, power, acc;
	int sign;
	int exp;
	int exp_sign;

	while (isspace(*s))
		s++;
	sign = (*s == '-') ? -1 : 1;
	if (*s == '-' || *s == '+')
		s++;
	for (val = 0.0; isdigit(*s); s++)
		val = 10.0 * val + (*s - '0');
	if (*s == '.')
		s++;
	for (power = 1.0; isdigit(*s); s++)
	{
		val = 10.0 *val +(*s - '0');
		power *= 10.0;
	}
	if (*s == 'e' || *s == 'E')
		s++;
	exp_sign = (*s == '-') ? -1 : 1;
	if (*s == '-' || *s == '+')
		s++;
	for (exp = 0; isdigit(*s); s++)
		exp = 10.0 *exp + (*s - '0');
	acc = 1;
	while (exp--)
		acc *= 10.0;
	if (exp_sign == 1)
		return sign * val * acc / power;
	else
		return sign * val / (acc * power);
}

int myatoi(char *s)
{
	return (int) myatof(s);
}
