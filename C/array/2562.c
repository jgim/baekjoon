#include <stdio.h>

int main()
{
	int i;
	int high;
	int count;
	int array[9];

	i = 0;
	high = 0;
	while (i < 9)
	{
		scanf("%d", &array[i]);
		if (array[i] < 1 || array[i] > 99)
			return (0);
		if (array[i] > high)
		{
			high = array[i];
			count = i;
		}
		i++;
	}
	printf("%d\n%d", high, count + 1);
	return (0);
}
