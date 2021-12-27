#include <stdio.h>

/* 자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램 */

/* short */
// int main(n,i){scanf("%d",&n);for(i=1;i<=n;i++)printf("%d\n", i);}

int main()
{
	int n;
	int i;

	scanf("%d", &n);
	if (n < 0 || n > 100000)
		return (0);
	for (i = 1; i <= n; i++)
		printf("%d\n", i);
	return (0);
}
