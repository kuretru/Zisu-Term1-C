#include <stdio.h>
int main()
{
	int i, x, tmp, time = 1, poow = 1;
	scanf("%d", &x);
	if(x < 0)
		x = -x;
	tmp = x;
	while(tmp /= 10)
	{
		time++;
		poow *= 10;
	}
	for(i = 0; i < time; i++, poow /= 10)
	{
		tmp = x / poow;
		x = x - tmp * poow;
		printf("%d ", tmp);
	}
}
