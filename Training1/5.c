#include <stdio.h>
int main()
{
	int i, j, n;
	int array[6][6];
	int yes = 1;
	scanf("%d", &n);
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &array[i][j]);
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			if(array[i][j] > 0)
			{
				yes = 0;
				break;
			}
		}
	}
	if(yes)
		printf("YES");
	else
		printf("NO");
}
