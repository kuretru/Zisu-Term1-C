#include <stdio.h>
int main()
{
	int i, n, m, end = 1;//n for student,m for tap
	int remain, location, time = 0, tap[100], student[10000];
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &student[i]);
		if(i < m)
			tap[i] = student[i];
	}
	location = m;
	remain = n - m;
	while(end)
	{
		for(i = 0; i < m; i++)
		{
			if(tap[i] > 0)
				tap[i]--;
			if(tap[i] == 0)
			{
				if(remain > 0)
				{
					tap[i] = student[location++];
					remain--;
				}
			}
		}
		time++;
		for(i = 0; i < m; i++)
		{
			if(tap[i] > 0)
				break;
			if(i == m - 1)
				end = 0;
		}
	}
	printf("%d", time);
	return 0;
}
