#include <stdio.h>
int main()
{
	int i, j, k;
	int money, count = 0;
	scanf("%d", &money);
	for(i = money / 5; i > 0; i--)
	{
		for(j = (money - 5) / 2; j > 0; j--)
		{
			for(k = money - 7; k > 0; k--)
			{
				if(i * 5 + j * 2 + k == money)
				{
					printf("fen5:%d,fen2:%d,fen1:%d,total:%d\n", i, j, k, i + j + k);
					count++;
				}
			}
		}
	}
	printf("count = %d\n", count);
	return 0;
}
