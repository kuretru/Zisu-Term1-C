#include <stdio.h>
int main()
{
	int a = 1, b;
	for(b = 1; b <= 10; b++)
	{
		if(a >= 8)
			break;
		if(a % 2 == 1)
		{
			a += 5;
			continue;
		}
		a -= 3;
	}
	printf("%d", b);
	return 0;
}
