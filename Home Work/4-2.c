#include <stdio.h>
int main()
{
	int n = 0;
	char c;
	while((c = getchar()) != '\n')
	{
		if(c < '0' || c >  '9')
			n++;
	}
	printf("%d", n);
	return 0;
}
