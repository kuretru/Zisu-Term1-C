#include <stdio.h>
#include <string.h>
int main()
{
	int i, j = 0, len;
	char c, a[100], b[100];
	gets(a);
	len = strlen(a);
	for(i = 0; i < len; i++)
	{
		c = a[i];
		if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
			b[j++] = c;
	}
	b[j] = '\0';
	puts(b);
	return 0;
}
