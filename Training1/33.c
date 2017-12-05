#include <stdio.h>
#include <math.h>
int main()
{
	int i;
	char *s = "we45*&y3r#$1";
	for(i = 0; i < 12; i++)
	{
		printf("%d ", s[i] * (i + 1));
	}
	return 0;
}
