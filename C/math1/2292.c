#include <stdio.h>

int main()
{
	long i;
	long n;
	long sum;

	scanf("%ld", &n);
	sum = 1;
	for (i = 0; sum <= n; i++)
		if (i == 0)
			sum += 1;
		else
			sum += i * 6;
	printf("%ld", i);
	return (0);
}
