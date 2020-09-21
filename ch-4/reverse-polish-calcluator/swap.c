#include <stdio.h>

#define swap(t, x, y) {t tmp;tmp=(x),(x)=(y),(y)=tmp;}

int main(void)
{
	int i = 5;
	int j = 7;
	printf("i = %d, j = %d\n", i, j);
	swap(int, i, j);;
	printf("i = %d, j = %d\n", i, j);
}
