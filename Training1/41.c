#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
	char a[80];
	int n[3] = {0}, i;
	gets(a);
	for(i = 0; i < strlen(a); i++)
	{
		if(tolower(a[i]) >= 'a' && tolower(a[i]) <= 'z')
			n[0]++;
		else if (a[i] >= '0' && a[i] <= '9' )
			n[1]++;
		else
			n[2]++;
	}
	for(i = 0; i < 3; i++)
		printf("%d,", n[i]);
}
