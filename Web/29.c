#include <stdio.h>
int main()
{
	int i, j, n, m, data[20], use[20], sum, tmp, result[20], avg;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < 20; j++)
		{
			data[j] = 0;
			use[j] = 0;
		}
		sum = 0;
		scanf("%d", &m);
		for(j = 0; j < m; j++)
		{
			scanf("%d", &tmp);
			data[j] = tmp;
			sum += tmp;
		}
		if(sum % 4 == 0)
		{
			avg = sum / 4;
			for(j = 0; j < m; j++)
			{
				if(data[j] > avg)
					break;
				else if(data[j] == avg)
				{
					use[j] = 1;
					continue;
				}
				else
				{

				}
			}
		}
	}
	for(i = 0; i < n; i++)
	{
		if(result[i] == 1)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}
