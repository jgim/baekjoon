#include <stdio.h>

/* 입력받은 x,y값이 위치한 4분면 표시 */

/* short */

// int main(x, y)
// {
// 	scanf("%d %d", &x, &y);
// 	if (x > 0 && y > 0) printf("1");
// 	else if (x < 0 && y > 0) printf("2");
// 	else if (x < 0 && y < 0) printf("3");
// 	else if (x > 0 && y < 0); printf("4");
// }

int main()
{
	int x;
	int y;

	scanf("%d %d", &x, &y);

	if (x > 1000 || x < -1000 || x == 0)
		return (0);
	if (y > 1000 || y < -1000 || y == 0)
		return (0);
	if (x > 0 && y > 0)
		printf("1");
	else if (x < 0 && y > 0)
		printf("2");
	else if (x < 0 && y < 0)
		printf("3");
	else if (x > 0 && y < 0)
		printf("4");
	return(0);
}
