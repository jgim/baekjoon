#include <stdio.h>
#include <string.h>

int main()
{
	int i;
	int j;
	int n;
	int len;
	int sum;
	char temp;
	char alpha[26] = {};
	char word[101] = {};

	sum = 0;
	scanf ("%d", &n);
	for (i = 0; i < n; i++)
	{
		temp = 0;
		memset(alpha, 0, sizeof(alpha));
		memset(word, 0, sizeof(word));
		scanf("%s", word);
		for (j = 0; word[j] != '\0'; j++)
		{
			if (temp && temp != word[j])
			{
				if (alpha[word[j] - 'a'])
				{
					temp = 0;
					break;
				}
			}
			alpha[word[j] - 'a'] = 1;
			temp = word[j];
		}
		if (temp)
			sum++;
	}
	printf("%d", sum);
	return (0);
}
