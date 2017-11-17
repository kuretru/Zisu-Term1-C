#include <stdio.h>
int main()
{
	int n;
	char c;
	scanf("%d", &n);
	do {
		c = n % 10 + '0';
		putchar(c);
	} while((n /= 10) > 0);
	return 0;
}
