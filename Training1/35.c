#include <stdio.h>
int main()
{
	long s = 1, k = 1;
	int i;
	for(i = 2; i <= 12; i++)
	{
		k *= i;
		s += k;
	}
	printf("%ld", s);
	return 0;
}
