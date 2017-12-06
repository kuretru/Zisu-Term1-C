#include <stdio.h>
int main()
{
	int i, j, k;
	int m, n;
	int tmp;
	int data[1000];
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		n = 0;
		scanf("%d", &tmp);
		while(tmp > 0)
		{
			data[n++] = tmp;
			scanf("%d", &tmp);
		}
		for(j = 0; j < n - 1; j++)
		{
			for(k = 0; k < n - j - 1; k++)
			{
				if(data[k] > data[k + 1])
				{
					tmp = data[k];
					data[k] = data[k + 1];
					data[k + 1] = tmp;
				}
			}
		}
		for(j = 0; j < n; j++)
		{
			printf("%d", data[j]);
			if(j != n - 1)
				printf(" ");
			else
				printf("\n");
		}
	}
}
