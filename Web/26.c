#include <stdio.h>
#include <string.h>
int main()
{
	int i, j, num[2] = {0}, pow;
	char str[2][200], c;
	for(i = 0; i < 2; i++)
	{
		gets(str[i]);
		pow = 1;
		for(j = strlen(str[i]) - 1; j >= 0; j--)
		{
			c = str[i][j];
			if(c >= '0' && c <= '9')
			{
				num[i] += pow * (c - '0');
				pow *= 10;
			}
		}
	}
	printf("%d %d", num[0] / num[1], num[0] % num[1]);
	return 0;
}
