#include <stdio.h>
/* 두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성 */

/* short */
// int main(n,a,b)
// {scanf("%d", &n);for(int i = 0;i<n;i++){scanf("%d%d",&a,&b);printf("%d\n",a+b);}}

int main()
{
	int n;
	int a;
	int b;

	scanf("%d", &n);
	if (n < 1 || n > 1000000)
		return (0);
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		if (a < 1 || a > 1000)
			return (0);
		if (b < 1 || b > 1000)
			return (0);
		printf("%d\n", a + b);
	}
	return (0);
}
