#include <stdio.h>
int main()
{
	char c;
	c = getchar();
	if( c <= 'a' && c <= 'u' )
		c = c + 5;
	else
	if (c >= 'v' && c <= 'z')
		c -= 21;
	putchar(c);
	return 0;
}
