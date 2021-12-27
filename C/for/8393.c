#include <stdio.h>

/*n 이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램 */

/* short */
// int main(i,j,n)
// {scanf("%d", &n);j = 0;for(i = 1; i <= n; i++)j+=i;printf("%d",j);}

int main()
{
	int i;
	int j;
	int n;

	j = 0;
	scanf("%d", &n);
	if (n < 1 || n > 10000)
		return (0);
	for (i = 1; i <= n; i++)
		j += i;
	printf("%d", j);
	return (0);
}
