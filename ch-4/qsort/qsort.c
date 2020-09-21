#include <stdio.h>

void qsort(int *v, int left, int right);

int main(void)
{
	int arr[] = {
	30, 29, 28, 27, 26, 25, 24, 23, 22,
	};
	int len = sizeof (arr) / sizeof (arr[0]);
	qsort(arr, 0, len - 1);

	for (int i = 0; i < len; i++)
		printf("%d ", arr[i]);
}

void qsort(int *v, int left, int right)
{
	static int ii;
	printf("call%d\n",++ii);
	int i, last;
	void swap(int *v, int i, int j);

	if (left >= right)
		return;
	swap(v, left, (left + right) / 2);
	last = left;
	for (i = left + 1; i <= right; i++)
		if (v[i] < v[left])
			swap(v, ++last, i);
	swap(v, left, last);
	qsort(v, left, last-1);
	qsort(v, last+1, right);
}

void swap(int *v, int i, int j)
{
	int tmp;
	tmp = v[i], v[i] = v[j], v[j] = tmp;
}

