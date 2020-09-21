#include <stdio.h>

int binsearch(int x, int *arr, int len);

int main(void)
{
	int arr[] = {
		1, 2,3,4,5,5,5,5,6,7,8,9,9,9,9,9,9
	};
	printf("%d", binsearch(3, arr,sizeof (arr)/sizeof (arr[0]) ));
}

int binsearch(int x, int *arr, int len)
{
	int low, high, mid;

	low = 0;
	high = len - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < arr[mid])
			high = mid - 1;
		else if (x > arr[mid])
			low = mid + 1;
		else
			return arr[mid];
	}
	return -1;
}
