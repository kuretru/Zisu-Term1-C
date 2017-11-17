#include <stdio.h>
#define N 100
int main()
{
	char s[N] = "ABCDEFGH";
	char temp;
	int i, j;
	puts(s);
	for(j = 0; s[j]; j++)
		;
	for(i = 0, j -= 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	printf("%s", s);
	return 0;
}
