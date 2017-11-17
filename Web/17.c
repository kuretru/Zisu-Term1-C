#include <stdio.h>
int main()
{
	int num[100], sort[100];
	int i, j, len = 0, tmp;
	while(1)
	{
		scanf("%d", &tmp);
		if(tmp < 0)
			break;
		num[len] = tmp;
		sort[len] = len + 1;
		len++;
	}
	for(i = 0; i < len - 1; i++)
	{
		for(j = 0; j < len - 1 - i; j++)
		{
			if(num[j] > num[j + 1])
			{
				tmp = num[j];
				num[j] = num[j + 1];
				num[j + 1] = tmp;
				tmp = sort[j];
				sort[j] = sort[j + 1];
				sort[j + 1] = tmp;
			}
		}
	}
	for(i = 0; i < len; i++)
	{
		printf("%d(%d)", num[i], sort[i]);
		if(i != len - 1)
			printf(" ");
	}
	return 0;
}
