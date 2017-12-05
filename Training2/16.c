#include <stdio.h>
#include <string.h>
int main()
{
	int i, n, m;
	int j = 0;
	char data[100] = {0}, result[100];
	scanf("%d\n", &n);
	gets(data);
	scanf("%d", &m);
	for(i = m - 1; i < n; i++)
		result[j++] = data[i];
	result[j] = '\0';
	puts(result);
	return 0;
}
