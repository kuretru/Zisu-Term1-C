#include <stdio.h>
#define N 3
#define M 5
int main()
{
	int a[N][M] = {{1, 2, 3}, {4, 5, 6}};
	int i, j;
	for(i = 0; i < N; i++)
		for(j = 0; j < M; j++)
			printf("%d%c", a[i][j], j == M - 1 ? '\n' : ' ');
	return 0;
}
