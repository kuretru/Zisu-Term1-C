#include <stdio.h>
#include <string.h>

int main()
{
	int i, lena, lenb;
	char a[200], b[200];
	gets(a);
	gets(b);
	lena = strlen(a);
	lenb = strlen(b);
	for(i = 0; i < lena + lenb; i++)
	{
		if(i >= lena)
			a[i] = b[i - lena];
	}
	a[i] = '\0';
	puts(a);
	return 0;
}
