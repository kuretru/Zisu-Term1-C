#include <stdio.h>
#include <string.h>
int main()
{
	char s[] = "634,.%@\\w|sq2", c;
	int i, j, n = strlen(s);
	for(i = 0; i < n - 1; i++)
		for(j = 0; j < n - i - 1; j++)
		{
			if(s[j] > s[j + 1])
			{
				c = s[j];
				s[j] = s[j + 1];
				s[j + 1] = c;
			}
		}
	for(i = 0; i < n; i++)
		putchar(s[i]);
	return 0;
}
