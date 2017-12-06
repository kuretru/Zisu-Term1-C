#include <stdio.h>
int main()
{
	int i;
	int L, R;
	int tmp;
	int count = 0;
	scanf("%d %d", &L, &R);
	for(i = L; i <= R; i++)
	{
		tmp = i;
		while(tmp > 0)
		{
			if(tmp % 10 == 2)
				count++;
			tmp /= 10;
		}
	}
	printf("%d", count);
	return 0;
}
