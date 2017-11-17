#include <stdio.h>
int main()
{
	int i, k, result[1000];
	scanf("%d", &k);
	for(i = 0; i < k; i++)
	{
		result[i] = htoi();
	}
	for(i = 0; i < k; i++)
	{
		printf("%d\n", result[i]);
	}
}

int htoi()
{
	int num;
	scanf("%x", &num);
	return num;
}
