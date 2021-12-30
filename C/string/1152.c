#include <stdio.h>

/*
영어 대소문자와 공백으로 이루어진 문자열이 주어진다.
이 문자열에는 몇 개의 단어가 있을까? 이를 구하는 프로그램을 작성하시오.
단, 한 단어가 여러 번 등장하면 등장한 횟수만큼 모두 세어야 한다.
*/

int main()
{
	int i;
	char c;
	char temp;

	temp = 0;
	i = 0;
	while (scanf("%c", &c))
	{
		if (c == '\n')
			break;
		if ((temp == 0 && c != ' ') || temp == ' ')
			i++;
		temp = c;
	}
	printf("%d", i);
}
