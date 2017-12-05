#include <stdio.h>
int main()
{
	int aa[10], b[10], i;
	for(i = 0; i < 10; i++)
		scanf("%d", &aa[i]);
	for(i = 1; i < 10; i++)
		b[i] = aa[i - 1] + aa[i];
	for(i = 1; i < 10; i++)
	{
		printf("%3d", b[i]);
		if(i % 3 == 0) printf("\n");
	}
	return 0;
}
