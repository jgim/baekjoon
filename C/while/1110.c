#include <stdio.h>

int main()
{
	int n;
	int a;
	int i;

	scanf("%d", &n);
	if (n < 0 || n > 99)
		return (0);
	a = n;
	i = 0;
	while (++i > 0)
	{
		n = ((n % 10) * 10) + (((n / 10) + (n % 10)) % 10);
		if (a == n)
		{
			printf("%d", i);
			return (0);
		}
	}
}
