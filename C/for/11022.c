#include <stdio.h>

/* 두 정수 A와 B를 입력받은 다음, A + B = A+B를 출력하는 프로그램 */

/* short */
// int main(n,i,a,b){for(i=scanf("%d",&n);i<=n;i++){scanf("%d %d", &a, &b);printf("Case #%d: %d + %d = %d\n",i,a,b,a+b);}}


int main()
{
	int n;
	int i;
	int a;
	int b;

	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		scanf("%d %d", &a, &b);
		if (a < 1 || a > 9)
			return (0);
		if (b < 1 || b > 9)
			return (0);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
	}
	return (0);
}
