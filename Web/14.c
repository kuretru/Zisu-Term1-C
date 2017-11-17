#include <stdio.h>
int main()
{
	int n, m, i, j, data[100][4], dic[100];
	scanf("%d", &n);
	for(i = 0; i < n; i++)
	{
		scanf("%d %d %d %d", &data[i][0], &data[i][1], &data[i][2], &data[i][3]);
	}
	scanf("%d", &m);
	for(i = 0; i < m; i++)
	{
		scanf("%d", &dic[i]);
	}
	for(i = 0; i < m; i++)
	{
		int key;
		key = dic[i];
		printf("%d ", key);
		for(j = 0; j < n; j++)
		{
			if(data[j][0] == key)
			{
				printf("%d %d %d\n", data[j][1], data[j][2], data[j][3]);
				break;
			}
			if(j == n - 1)
			{
				printf("NONE\n");
				break;
			}
		}
	}
	return 0;
}
