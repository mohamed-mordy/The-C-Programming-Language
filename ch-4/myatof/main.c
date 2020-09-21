// 9/18/2020 10:29:30 PM
#include <stdio.h>
#include "myatof.h"

int main(void)
{
	char *s = "       -1234.345e2";
	char *ss = "234556786";

	printf("string-double: %s\n", s);
	printf("string-integer: %s\n", ss);

	double ff = myatof(s);
	int dd = myatoi(ss);
	printf("double-precision: %f\n", ff);
	printf("int: %d\n", dd);
	return 0;
}
