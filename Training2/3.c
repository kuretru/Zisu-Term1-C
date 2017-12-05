#include <stdio.h>
int main()
{
	int i, j;
	int data[3][3];
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			scanf("%d", &data[i][j]);
	}
	printf("%d %d", data[0][0] + data[1][1] + data[2][2],
	       data[2][0] + data[1][1] + data[0][2]);
	return 0;
}
