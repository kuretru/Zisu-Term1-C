#include <stdio.h>
#define N 3

int main()
{
	int i, j;
	int tmp;
	int data[3][3];
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &data[i][j]);
	for(i = 0; i <= 1; i++)
	{
		for(j = i + 1; j < 3; j++)
		{
			tmp = data[i][j];
			data[i][j] = data[j][i];
			data[j][i] = tmp;
		}
	}
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("%d ", data[i][j]);
		printf("\n");
	}
	return 0;
}
