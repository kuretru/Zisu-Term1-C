#include <stdio.h>
int main()
{
	int list[500], flag[500];
	int i, j, max, tim;
	int count, t;
	scanf("%d", &tim);
	for(i = 0; i < tim; i++)
	{
		scanf("%d", &max);
		for(j = 0; j < max; j++)
		{
			list[j] = j + 1;
			flag[j] = 0;
		}
		count = max;
		t = 1;
		while(count > 1)
		{
			for(j = 0; j < max; j++)
			{
				if( flag[j] != -1)
				{
					flag[j] = t;
					t++;
					if(t == 4)
					{
						t = 1;
						flag[j] = -1;
					}
				}

			}
			count = 0;
			for(j = 0; j < max; j++)
			{
				if(flag[j] != -1)
					count++;
			}
		}
		for(j = 0; j < max; j++)
		{
			if(flag[j] != -1)
			{
				printf("%d\n", list[j]);
			}
		}
	}
	return 0;
}
