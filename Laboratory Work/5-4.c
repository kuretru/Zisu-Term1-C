#include <stdio.h>
#include <string.h>
#define size 100
int main()
{
	int i;
	char str[size];
	gets(str);
	for(i = 0; i < strlen(str); i++)
	{
		if(str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	puts(str);
	return 0;
}
