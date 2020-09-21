#include "myqsort.h"

static void swap(void **v, int i, int j);

void myqsort(void **v, int left, int right,
	int (*comp)(void *, void *))
{
	int i, last;

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for ( i = left + 1; i <= right; i++)
		if ((*comp)(v[i], v[left]) < 0)
			swap(v, ++last, i);
	swap(v, left, last);
	myqsort(v, left, last - 1, comp);
	myqsort(v, last + 1, right, comp);
}

static void swap(void **v, int i, int j)
{
	void *tmp;
	tmp = v[i], v[i] = v[j] , v[j] = tmp;
}