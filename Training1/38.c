#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char str[256];
	int i, k = 0, n;
	gets(str);
	n = strlen(str);
	for(i = 0; i < n; i++)
		if(tolower(str[i]) >= 'a' && tolower(str[i]) <= 'z')
			str[k++] = str[i];
	str[k] = '\0';
	printf("%s", str);
	return 0;
}
