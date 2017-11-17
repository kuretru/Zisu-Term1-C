#include <stdio.h>
#include <string.h>
int main()
{
	int i;
	char last, t, result[100];
	gets(result);
	for(i = 0; i < 100; i++)
	{
		if(result[i] == 0)
		{
			result[0] = t;
			break;
		}
		if(i % 2 == 0)
		{
			t = result[i];
			result[i] = last;
			last = t;
		}
	}
	puts(result);
	return 0;
}
