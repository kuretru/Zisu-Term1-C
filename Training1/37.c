#include <stdio.h>
int main()
{
	int i, j;
	int sum;
	int data[5000];
	for(i = 6; i <= 5000; i++)
	{
		sum = 0;
		for(j = 1; j <= i / 2; j++)
		{
			if(i % j == 0)
				sum += j;
		}
		data[i] = sum;
	}
	for(i = 6; i <= 5000; i++)
	{
		if(data[i] >= 6 && data[i] <= 5000)
		{
			if(data[data[i]] == i && i != data[i])
			{
				printf("%6d,%6d\n", i, data[i]);
			}
		}
	}
	return 0;
}
