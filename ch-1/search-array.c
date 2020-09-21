#include <stdio.h>
#define SIZE 10

int main(void)
{
	int arr[SIZE];
	int i;
	int x;
	int count = 0;
	for (i = 0; i < SIZE; i++)
	{
		printf("enter val[%d]: ", i);
		scanf("%d", &arr[i]);
	}
	printf("enter val to search: ");
	scanf("%d", &x);

	for (i = 0; i <SIZE; i++)
	{
		if (arr[i] == x)
			count++;
	}


	if (count)
		printf("value exists %d times", count);
	if (!count)
		printf("value not exists");
//	printf("%s%d\n", !count ? "vo value found ": "no of occerences is: ", count);
}
