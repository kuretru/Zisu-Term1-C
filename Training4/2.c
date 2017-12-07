#include <stdio.h>

int mm;
int result[4];

void calc(int index, int m, int n)
{
	int i, j;
	int sum, last;
	for(i = 1; i <= m / n; i++)
	{
		result[index] = i;
		if(n > 1)
			calc(index + 1, m - i, n - 1);
		else
		{
			sum = result[0];
			last = result[0];
			for(j = 1; j <= index; j++)
			{
				if(result[j] >= last)
				{
					sum += result[j];
					last = result[j];
				}
				else
				{
					sum = 0;
					break;
				}
			}
			if(sum == mm)
			{
				for(j = 0; j <= index; j++)
				{
					printf("%d", result[j]);
					if(j != index)
						printf(" ");
					else
						printf("\n");
				}
			}
		}
	}
}

int main()
{
	int i;
	int groups, m, n;
	scanf("%d", &groups);
	for(i = 0; i < groups; i++)
	{
		scanf("%d %d", &m, &n);
		mm = m;
		calc(0, m, n);
		if(i != groups - 1)
			printf("\n");
	}
	return 0;
}
