#include <stdio.h>
#define N 100
int main()
{
	char s[N];
	int n = 0;
	scanf("%s", s);
	while(s[n++])
		;
	printf("%s %d", s, n - 1);
	return 0;
}
