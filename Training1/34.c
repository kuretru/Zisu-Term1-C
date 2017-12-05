#include <stdio.h>
#include <string.h>
int main()
{
	char s[80];
	int i, j;
	gets(s);
	for(i = j = 0; i < strlen(s); i++)
	{
		if(s[i] != 'c')
			s[j++] = s[i];
	}
	s[j] = '\0';
	puts(s);
	return 0;
}
