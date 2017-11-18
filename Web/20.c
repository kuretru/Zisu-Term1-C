#include <stdio.h>
int main()
{
	int i, n, m;//n for student,m for tap
	int remain, location, time = 1, tap[100], student[10000];
	scanf("%d %d", &n, &m);
	for(i = 0; i < n; i++)
	{
		scanf("%d", &student[i]);
		if(i < m)
			tap[i] = student[i];
	}
	location = m;
	remain = n - m;
	while(remain > 0)
	{
		printf("remain%d ", remain);
		for(i = 0; i < m; i++)
		{
			if(tap[i] > 0)
				tap[i]--;
			if(tap[i] == 0)
			{
				tap[i] = student[location++];
				remain--;
			}
			printf("%d ", tap[i]);
		}
		printf("\n");
		time++;
	}
	printf("%d", time);
	return 0;
}
