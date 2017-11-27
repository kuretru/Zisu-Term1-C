#include <stdio.h>

int data[20];
int used[20];
int avg, count;
int getPartner(int number);

int main()
{
	int i, j, k;
	int n;
	int sum, num;
	int result[30] = {0};
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &count);
		sum = 0;
		for(j = 0; j < count; j++)
		{
			scanf("%d", &num);
			data[j] = num;
			sum += num;
			used[j] = 0;
		}
		if(sum % 4 == 0)
		{
			avg = sum / 4;
			for(j = 0; j < count - 1; j++)
			{
				for(k = 0; k < count - 1 - j; k++)
				{
					if(data[k] < data[k + 1])
					{
						num = data[k];
						data[k] = data[k + 1];
						data[k + 1] = num;
					}
				}
			}
			for(j = 0; j < count; j++)
			{
				if(used[j] == 0)
				{
					if(data[j] > avg)
					{
						result[i] = 0;
						break;
					}
					else if(data[j] == avg)
					{
						used[j] = 1;
						continue;
					}
					else
					{
						used[j] = 1;
						if(getPartner(data[j]) == 0)
						{
							used[j] = 0;
							break;
						}
					}
				}
			}
		}
		for(j = 0; j < count; j++)
		{
			if(used[j] == 0)
				break;
			if(j == count - 1)
				result[i] = 1;
		}

	}
	for(i = 0; i < n; i++)
	{
		if(result[i] == 1)
			printf("yes\n");
		else
			printf("no\n");
	}
}

int getPartner(int number)
{
	int i, sum;
	for(i = count - 1; i >= 0; i--)
	{
		if(used[i] == 0)
		{
			sum = data[i] + number;
			if(sum > avg)
				continue;
			else if(sum == avg)
			{
				used[i] = 1;
				return 1;
			}
			else
			{
				used[i] = 1;
				if(getPartner(sum) == 0)
					used[i] = 0;
				else
					return 1;
			}
		}
	}
	return 0;
}
