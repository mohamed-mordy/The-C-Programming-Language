#include <stdio.h>

void shellsort(int *v, int n);
void printarr(int *v, int n);

int main(void)
{
	int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	printarr(arr, 10);
	shellsort(arr, 10);
}

/* shellsort: sort v[0]...v[n-1] into increasing order */
void shellsort(int *v, int n)
{
	for (int gap = n/2; gap > 0; gap /= 2)
		for (int i = gap ; i < n; i++)
			for (int j = i - gap; j >= 0 && v[j] > v[j+gap]; j -= gap) {
				int temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
				printarr(v, n);
			}
	return;
}

void printarr(int *v, int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", v[i]);
	printf("\n");
}
