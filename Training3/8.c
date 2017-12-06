#include <stdio.h>
int main()
{
	int dcount = 0, lcount = 0;
	char c;
	while(scanf("%c", &c) != EOF)
	{
		if(c >= '0' && c <= '9')
			dcount++;
		else if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			lcount++;
	}
	printf("%d digits\n", dcount);
	printf("%d letters\n", lcount);
	return 0;
}
