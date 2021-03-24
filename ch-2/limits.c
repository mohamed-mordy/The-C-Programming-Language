#include <stdio.h> 
#include <limits.h>
#include <float.h>

int main(void)
{
	/* char size_t */
	printf("char size = %ld CHAR_MAX = %d CHAR_MIN = %d \n", sizeof(char), CHAR_MAX, CHAR_MIN);
	printf("unsigned char size = %ld UCHAR_MAX = %d \n", sizeof(unsigned char), UCHAR_MAX);
	printf("\n\n");

	/* short size_t */
	printf("short int size = %ld INT_MAX = %d INT_MIN = %d\n", sizeof(short int), SHRT_MAX, SHRT_MIN);
	printf("unsigned short int size = %ld USHRT_MAX = %d\n", sizeof(unsigned short int), USHRT_MAX);
	printf("\n\n");

	/* int size_t */
	printf("int size = %ld INT_MAX = %d INT_MIN = %d\n", sizeof(int), INT_MAX, INT_MIN);
	printf("unsigned int size = %ld UINT_MAX = %d\n", sizeof(unsigned int), UINT_MAX);
	printf("\n\n");

	/* long size_t */
	printf("long int size = %ld LONG_MAX = %ld LONG_MIN = %ld\n", sizeof(long int), LONG_MAX , LONG_MIN);
	printf("long int size = %ld ULONG_MAX = %ld\n", sizeof(long int), ULONG_MAX);
	printf("\n\n");

	/* long long size_t */
	printf("long long int size = %ld LLONG_MAX = %lld LLONG_MIN = %lld\n", sizeof(long long int), LLONG_MAX, LLONG_MIN);
	printf("unsigned long long int size = %ld ULLONG_MAX = %lld\n", sizeof(unsigned long long int), ULLONG_MAX);
	printf("\n\n");

	/* double size_t */
	printf("double size = %ld DBL_MAX = %lf DBL_MIN = %lf\n", sizeof(double) , DBL_MAX, DBL_MIN);
	printf("\n\n");

	/* long double size_t */
	printf("long double size = %ld LDBL_MAX = %Lf LDBL_MIN = %Lf\n", sizeof(long double), LDBL_MAX, LDBL_MIN);
	printf("\n\n");

	/* float size_t */
	printf("float size = %ld FLT_MAX = %f FLT_MIN = %f\n", sizeof(float), FLT_MAX, FLT_MIN);
	printf("\n\n");

	/* return */
	return 0;
}

