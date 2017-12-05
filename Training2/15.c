#include <stdio.h>
int main()
{
	int list[500], flag[500];
	int i, max;
	int count, t;
	scanf("%d", &max);
	for(i = 0; i < max; i++)
	{
		list[i] = i + 1;
		flag[i] = 0;
	}
	count = max;
	t = 1;
	while(count > 1)
	{
		for(i = 0; i < max; i++)
		{
			if(flag[i] != -1)
			{
				flag[i] = t;
				t++;
				if(t == 4)
				{
					t = 1;
					flag[i] = -1;
				}
			}

		}
		count = 0;
		for(i = 0; i < max; i++)
		{
			if(flag[i] != -1)
				count++;
		}
	}
	for(i = 0; i < max; i++)
	{
		if(flag[i] != -1)
		{
			printf("%d\n", list[i]);
		}
	}
	return 0;
}
