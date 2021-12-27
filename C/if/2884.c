#include <stdio.h>

 /*
 (0 ≤ H ≤ 23, 0 ≤ M ≤ 59
 현재 시간에서 45분을 뺀 시간은?
 */

// int main(h, m)
// {
// 	scanf("%d %d", &h, &m);
// 	if (m >= 45)
// 		printf("%d %d", h, m - 45);
// 	else if (m < 45)
// 	{
// 		if (h == 0) printf("23 %d", m + 15);
// 		else printf("%d %d", h - 1, m + 15);
// 	}
// }

int main()
{
	int h;
	int m;

	scanf("%d %d", &h, &m);
	if (h < 0 || h > 23)
		return (0);
	if (m < 0 || m > 59)
		return (0);
	if (m >= 45)
		printf("%d %d", h, m - 45);
	else if (m < 45)
	{
		if (h == 0)
			printf("23 %d", m + 15);
		else
			printf("%d %d", h - 1, m + 15);
	}
	return (0);
}
